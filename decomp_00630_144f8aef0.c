// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144f8aef0 FUN_144f8aef0 body=786 status=ok
// SIG undefined FUN_144f8aef0(void)

undefined4 * FUN_144f8aef0(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong local_res18;
  ulonglong local_res20;
  undefined8 local_208;
  code *local_200;
  ulonglong *local_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  ulonglong *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  lVar4 = param_3;
  lVar5 = param_3;
  do {
    iVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar4 + 8);
      if (lVar4 == 0) {
        *param_2 = 0;
        return param_2;
      }
      pcVar1 = *(code **)(*param_1 + 0x10);
      if ((pcVar1 != (code *)0x0) &&
         (cVar2 = (*pcVar1)(lVar4,*(undefined8 *)(*param_1 + 0x18)), cVar2 == '\0')) {
        lVar4 = *(longlong *)(*param_1 + 0x28);
        if ((lVar4 == 0) ||
           ((*(byte *)(lVar4 + 0x50) < *(byte *)(*param_1 + 0x30) &&
            (cVar2 = FUN_144bdbf80(), cVar2 == '\0')))) goto LAB_144f8b097;
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          local_res18 = FUN_144beee40(param_3);
          uVar3 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_208 = 1;
          local_200 = FUN_144f50c70;
          local_1f8 = &local_res18;
          lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' has an unreachable type in parents chain",
                                &local_208,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0xcc;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          FUN_144bdc690(local_1d8);
          goto LAB_144f8b097;
        }
        local_res20 = FUN_144beee40(param_3);
        uVar3 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_1f0 = 1;
        local_1e8 = FUN_144f50c70;
        local_1e0 = &local_res20;
        lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' has an unreachable type in parents chain",
                              &local_1f0,0);
        *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0xcc;
        *(undefined4 *)(lVar4 + 0x1c) = 0;
LAB_144f8b08e:
        FUN_144bdc8a0(local_188);
LAB_144f8b097:
        local_res18 = local_res18 & 0xffffffff00000000;
        FUN_144f8aee0(&local_res18);
        *param_2 = (undefined4)local_res18;
        return param_2;
      }
      if (lVar4 == lVar5) {
        lVar4 = *(longlong *)(*param_1 + 0x28);
        if ((lVar4 == 0) ||
           ((*(byte *)(lVar4 + 0x50) < *(byte *)(*param_1 + 0x30) &&
            (cVar2 = FUN_144bdbf80(), cVar2 == '\0')))) goto LAB_144f8b097;
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          local_res18 = FUN_144beee40(param_3);
          uVar3 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_1f0 = 1;
          local_1e8 = FUN_144f50c70;
          local_1e0 = &local_res18;
          lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' has a loop in parents chain",&local_1f0,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0xcd;
          *(undefined4 *)(lVar4 + 0x1c) = 0xa62e68d9;
          FUN_144bdc690(local_1d8);
          goto LAB_144f8b097;
        }
        local_res20 = FUN_144beee40(param_3);
        uVar3 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_208 = 1;
        local_200 = FUN_144f50c70;
        local_1f8 = &local_res20;
        lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' has a loop in parents chain",&local_208,0);
        *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0xcd;
        *(undefined4 *)(lVar4 + 0x1c) = 0xa62e68d9;
        goto LAB_144f8b08e;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    lVar5 = *(longlong *)(lVar5 + 8);
  } while( true );
}



// FUNCTION 144f8b210 FUN_144f8b210 body=1351 status=ok
// SIG undefined FUN_144f8b210(void)

undefined4 * FUN_144f8b210(longlong *param_1,undefined4 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong local_res8;
  ulonglong local_res18;
  uint local_res20 [2];
  undefined8 local_228;
  code *local_220;
  ulonglong *local_218;
  code *local_210;
  uint *local_208;
  undefined8 local_200;
  code *local_1f8;
  ulonglong *local_1f0;
  code *local_1e8;
  uint *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  uVar8 = 0;
  uVar1 = *param_3;
  lVar4 = *param_1;
  local_res8._0_4_ = 0;
  if ((*(ulonglong *)(lVar4 + 8) & uVar1) == uVar1) {
    if ((((((byte)uVar1 >> 4 & 1) != 0) && ((uVar1 & 0x10) != 0)) &&
        (puVar5 = (ulonglong *)FUN_144befea0(param_3,0x10), puVar5 != (ulonglong *)0x0)) &&
       (0xffffffff < *puVar5)) {
      lVar4 = *(longlong *)(*param_1 + 0x28);
      if ((lVar4 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar4 + 0x50) ||
          (cVar2 = FUN_144bdbf80(), cVar2 != '\0')))) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          uVar3 = FUN_144bdc640(local_1d8);
          local_200 = 1;
          local_1f8 = FUN_144f92e90;
          local_1f0 = param_3;
          lVar4 = FUN_144bdc480(uVar3,"Overflow in VERSION of type \'{}\' (should fit on 32 bits).",
                                &local_200,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x104;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          FUN_144bdc690(local_1d8);
        }
        else {
          uVar3 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_228 = 1;
          local_220 = FUN_144f92e90;
          local_218 = param_3;
          lVar4 = FUN_144bdc480(uVar3,"Overflow in VERSION of type \'{}\' (should fit on 32 bits).",
                                &local_228,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x104;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          FUN_144bdc8a0(local_188);
        }
      }
      local_res18._0_4_ = 0;
      FUN_144f8aee0(&local_res18);
      uVar8 = (uint)local_res18;
    }
    if ((((int)uVar8 < 0) && (FUN_144f8aee0(&local_res8), *(char *)*param_1 != '\0')) ||
       ((piVar6 = (int *)FUN_144f8b760(param_1,&local_res18,param_3), *piVar6 < 0 &&
        (FUN_144f8aee0(&local_res8), *(char *)*param_1 != '\0')))) goto LAB_144f8b730;
    if ((((uint)*param_3 >> 0x15 & 1) == 0) ||
       (puVar7 = (undefined8 *)FUN_144befea0(param_3,0x200000), puVar7 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*puVar7;
    }
    lVar4 = *param_1;
    if (uVar8 != (*(uint *)(lVar4 + 4) & uVar8)) {
      if ((*(longlong *)(lVar4 + 0x28) != 0) &&
         ((*(byte *)(lVar4 + 0x30) <= *(byte *)(*(longlong *)(lVar4 + 0x28) + 0x50) ||
          (cVar2 = FUN_144bdbf80(), cVar2 != '\0')))) {
        cVar2 = FUN_144bdbf80();
        lVar4 = *param_1;
        uVar8 = ~*(uint *)(lVar4 + 4) & uVar8;
        if (cVar2 != '\0') {
          local_res20[0] = uVar8;
          uVar3 = FUN_144bdc810(local_188,*(undefined8 *)(lVar4 + 0x28),
                                *(undefined1 *)(lVar4 + 0x30));
          local_228 = 2;
          local_220 = FUN_144f92e90;
          puVar7 = &local_228;
          local_210 = FUN_144f50a00;
          local_208 = local_res20;
          local_218 = param_3;
        }
        else {
          local_res18._0_4_ = uVar8;
          uVar3 = FUN_144bdc640(local_1d8,*(undefined8 *)(lVar4 + 0x28),
                                *(undefined1 *)(lVar4 + 0x30));
          local_200 = 2;
          local_1f8 = FUN_144f92e90;
          puVar7 = &local_200;
          local_1e8 = FUN_144f50a00;
          local_1e0 = (uint *)&local_res18;
          local_1f0 = param_3;
        }
        lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' has invalid forbidden flag(s) 0x{:x8}.",puVar7,0);
        *(undefined8 *)(lVar4 + 0x40) = 0x12d;
        *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined4 *)(lVar4 + 0x1c) = 0xa62e68d8;
        if (cVar2 != '\0') {
          FUN_144bdc8a0(local_188);
        }
        else {
          FUN_144bdc690(local_1d8);
        }
      }
      local_res18._0_4_ = 0;
      FUN_144f8aee0(&local_res18);
      if (((int)(uint)local_res18 < 0) && (FUN_144f8aee0(&local_res8), *(char *)*param_1 != '\0'))
      goto LAB_144f8b730;
    }
    piVar6 = (int *)FUN_144f8bda0(param_1,&local_res18,param_3);
    if ((((*piVar6 < 0) && (FUN_144f8aee0(&local_res8), *(char *)*param_1 != '\0')) ||
        ((~(byte)*param_3 & 1) != 0)) ||
       (((piVar6 = (int *)FUN_144f8d080(param_1,&local_res18,param_3), *piVar6 < 0 &&
         (FUN_144f8aee0(&local_res8), *(char *)*param_1 != '\0')) ||
        (piVar6 = (int *)FUN_144f8d4d0(param_1,&local_res18,param_3), -1 < *piVar6))))
    goto LAB_144f8b730;
  }
  else {
    if ((*(longlong *)(lVar4 + 0x28) != 0) &&
       ((*(byte *)(lVar4 + 0x30) <= *(byte *)(*(longlong *)(lVar4 + 0x28) + 0x50) ||
        (cVar2 = FUN_144bdbf80(), cVar2 != '\0')))) {
      cVar2 = FUN_144bdbf80();
      lVar4 = *param_1;
      uVar8 = ~*(uint *)(lVar4 + 8) & (uint)uVar1;
      if (cVar2 == '\0') {
        local_res8._0_4_ = uVar8;
        uVar3 = FUN_144bdc640(local_1d8,*(undefined8 *)(lVar4 + 0x28),*(undefined1 *)(lVar4 + 0x30))
        ;
        local_228 = 1;
        local_220 = FUN_144f92e20;
        local_218 = &local_res8;
        lVar4 = FUN_144bdc480(uVar3,"Type has invalid optionals {}.",&local_228,0);
        *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0xe8;
        *(undefined4 *)(lVar4 + 0x1c) = 0;
        FUN_144bdc690(local_1d8);
        local_res8._0_4_ = 0;
        goto LAB_144f8b724;
      }
      local_res18._0_4_ = uVar8;
      uVar3 = FUN_144bdc810(local_188,*(undefined8 *)(lVar4 + 0x28),*(undefined1 *)(lVar4 + 0x30));
      local_200 = 1;
      local_1f8 = FUN_144f92e20;
      local_1f0 = &local_res18;
      lVar4 = FUN_144bdc480(uVar3,"Type has invalid optionals {}.",&local_200,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0xe8;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      FUN_144bdc8a0(local_188);
    }
    local_res8._0_4_ = 0;
  }
LAB_144f8b724:
  FUN_144f8aee0(&local_res8);
LAB_144f8b730:
  *param_2 = (uint)local_res8;
  return param_2;
}



// FUNCTION 144f8b760 FUN_144f8b760 body=1600 status=ok
// SIG undefined FUN_144f8b760(void)

undefined4 * FUN_144f8b760(longlong *param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_res18 [2];
  ulonglong local_res20;
  undefined8 local_238;
  code *local_230;
  ulonglong *local_228;
  code *local_220;
  ulonglong *local_218;
  code *local_210;
  ulonglong *local_208;
  undefined8 local_200;
  code *local_1f8;
  ulonglong *local_1f0;
  code *local_1e8;
  ulonglong *local_1e0;
  code *local_1d8;
  ulonglong *local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  if ((~(byte)*param_3 & 1) == 0) {
    puVar3 = (uint *)FUN_144bef800(param_3,local_res18);
    puVar5 = (ulonglong *)0x0;
    if ((*puVar3 & 0x1f) == 0) {
      puVar5 = param_3;
    }
    if (puVar5 == (ulonglong *)0x0) {
      puVar4 = (undefined4 *)FUN_144bef800(param_3,local_res18);
      puVar5 = (ulonglong *)0x0;
      if (((byte)*puVar4 & 0x1f) == 1) {
        puVar5 = param_3;
      }
      if (puVar5 == (ulonglong *)0x0) goto LAB_144f8b909;
    }
    iVar2 = FUN_144beec90(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_144beecf0(param_3);
      if (iVar2 == 0) goto LAB_144f8bd83;
    }
    lVar7 = *(longlong *)(*param_1 + 0x28);
    if (lVar7 != 0) {
      if (*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') goto LAB_144f8b8e9;
      }
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_238 = 1;
        local_230 = FUN_144f92e90;
        local_228 = param_3;
        lVar7 = FUN_144bdc480(uVar6,"Void/opaque type \'{}\' has non-zero size and/or alignment.",
                              &local_238,0);
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x110;
        *(undefined4 *)(lVar7 + 0x1c) = 0;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_200 = 1;
        local_1f8 = FUN_144f92e90;
        local_1f0 = param_3;
        lVar7 = FUN_144bdc480(uVar6,"Void/opaque type \'{}\' has non-zero size and/or alignment.",
                              &local_200,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x110;
LAB_144f8b8d1:
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined4 *)(lVar7 + 0x1c) = 0;
        FUN_144bdc8a0(local_178);
      }
    }
LAB_144f8b8e9:
    local_res18[0] = 0;
    FUN_144f8aee0(local_res18);
    *param_2 = local_res18[0];
  }
  else {
LAB_144f8b909:
    if (((uint)*param_3 >> 0x14 & 1) != 0) {
      puVar3 = (uint *)FUN_144befea0(param_3,0x100000);
      if (puVar3 != (uint *)0x0) {
        uVar8 = (ulonglong)(ushort)*puVar3;
        local_res20 = (ulonglong)(*puVar3 >> 0x10 & 0xfff);
        if (uVar8 == 0) {
          lVar7 = *(longlong *)(*param_1 + 0x28);
          if (lVar7 != 0) {
            if (*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) {
              cVar1 = FUN_144bdbf80();
              if (cVar1 == '\0') goto LAB_144f8b8e9;
            }
            cVar1 = FUN_144bdbf80();
            if (cVar1 != '\0') {
              uVar6 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                                    *(undefined1 *)(*param_1 + 0x30));
              local_238 = 1;
              local_230 = FUN_144f92e90;
              local_228 = param_3;
              lVar7 = FUN_144bdc480(uVar6,"Type \'{}\' has zero size.",&local_238,0);
              *(undefined8 *)(lVar7 + 0x40) = 0x119;
              goto LAB_144f8b8d1;
            }
            uVar6 = FUN_144bdc640(local_1c8);
            local_200 = 1;
            local_1f8 = FUN_144f92e90;
            local_1f0 = param_3;
            lVar7 = FUN_144bdc480(uVar6,"Type \'{}\' has zero size.",&local_200,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x119;
            *(undefined4 *)(lVar7 + 0x1c) = 0;
            FUN_144bdc690(local_1c8);
          }
        }
        else {
          puVar3 = (uint *)FUN_144b45d50(param_3);
          if ((*puVar3 >> 1 & 1) != 0) goto LAB_144f8bd83;
          if (local_res20 == 0) {
            lVar7 = *(longlong *)(*param_1 + 0x28);
            if (lVar7 != 0) {
              if (*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) {
                cVar1 = FUN_144bdbf80();
                if (cVar1 == '\0') goto LAB_144f8b8e9;
              }
              cVar1 = FUN_144bdbf80();
              if (cVar1 != '\0') {
                uVar6 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_238 = 1;
                local_230 = FUN_144f92e90;
                local_228 = param_3;
                lVar7 = FUN_144bdc480(uVar6,"Non-abstract type \'{}\' has zero alignment.",
                                      &local_238,0);
                *(undefined8 *)(lVar7 + 0x40) = 0x11f;
                goto LAB_144f8b8d1;
              }
              uVar6 = FUN_144bdc640(local_1c8);
              local_200 = 1;
              local_1f8 = FUN_144f92e90;
              local_1f0 = param_3;
              lVar7 = FUN_144bdc480(uVar6,"Non-abstract type \'{}\' has zero alignment.",&local_200,
                                    0);
              *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x11f;
              *(undefined4 *)(lVar7 + 0x1c) = 0;
              FUN_144bdc690(local_1c8);
            }
          }
          else if ((local_res20 & local_res20 - 1) == 0) {
            if (uVar8 % local_res20 == 0) goto LAB_144f8bd83;
            lVar7 = *(longlong *)(*param_1 + 0x28);
            if (lVar7 != 0) {
              if (*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) {
                cVar1 = FUN_144bdbf80();
                if (cVar1 == '\0') goto LAB_144f8b8e9;
              }
              cVar1 = FUN_144bdbf80();
              if (cVar1 != '\0') {
                uVar6 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_238 = 3;
                local_230 = FUN_144f92e90;
                local_220 = FUN_144f92e90;
                local_210 = FUN_144f50b20;
                local_208 = &local_res20;
                local_228 = param_3;
                local_218 = param_3;
                lVar7 = FUN_144bdc480(uVar6,
                                      "Non-abstract type \'{}\' has size ({} bytes) not divisible by its alignment ({} bytes)."
                                      ,&local_238,0);
                *(undefined8 *)(lVar7 + 0x40) = 0x121;
                goto LAB_144f8b8d1;
              }
              uVar6 = FUN_144bdc640(local_1c8);
              local_200 = 3;
              local_1f8 = FUN_144f92e90;
              local_1e8 = FUN_144f92e90;
              local_1d8 = FUN_144f50b20;
              local_1d0 = &local_res20;
              local_1f0 = param_3;
              local_1e0 = param_3;
              lVar7 = FUN_144bdc480(uVar6,
                                    "Non-abstract type \'{}\' has size ({} bytes) not divisible by its alignment ({} bytes)."
                                    ,&local_200,0);
              *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x121;
              *(undefined4 *)(lVar7 + 0x1c) = 0;
              FUN_144bdc690(local_1c8);
            }
          }
          else {
            lVar7 = *(longlong *)(*param_1 + 0x28);
            if (lVar7 != 0) {
              if (*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) {
                cVar1 = FUN_144bdbf80();
                if (cVar1 == '\0') goto LAB_144f8b8e9;
              }
              cVar1 = FUN_144bdbf80();
              if (cVar1 != '\0') {
                uVar6 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_238 = 2;
                local_230 = FUN_144f92e90;
                local_220 = FUN_144f50b20;
                local_218 = &local_res20;
                local_228 = param_3;
                lVar7 = FUN_144bdc480(uVar6,
                                      "Non-abstract type \'{}\' has non-power-of-two alignment ({} bytes)."
                                      ,&local_238,0);
                *(undefined8 *)(lVar7 + 0x40) = 0x120;
                goto LAB_144f8b8d1;
              }
              uVar6 = FUN_144bdc640(local_1c8);
              local_200 = 2;
              local_1f8 = FUN_144f92e90;
              local_1e8 = FUN_144f50b20;
              local_1e0 = &local_res20;
              local_1f0 = param_3;
              lVar7 = FUN_144bdc480(uVar6,
                                    "Non-abstract type \'{}\' has non-power-of-two alignment ({} bytes)."
                                    ,&local_200,0);
              *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x120;
              *(undefined4 *)(lVar7 + 0x1c) = 0;
              FUN_144bdc690(local_1c8);
            }
          }
        }
        goto LAB_144f8b8e9;
      }
    }
LAB_144f8bd83:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144f8bda0 FUN_144f8bda0 body=4787 status=ok
// SIG undefined FUN_144f8bda0(void)

undefined4 * FUN_144f8bda0(longlong *param_1,undefined4 *param_2,ulonglong *******param_3)

{
  ulonglong ******ppppppuVar1;
  uint uVar2;
  ulonglong ******ppppppuVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined8 local_res10;
  ulonglong ******local_res18;
  ulonglong ******local_res20;
  undefined8 local_208;
  code *local_200;
  ulonglong ******local_1f8;
  code *local_1f0;
  ulonglong ******local_1e8;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  local_res10 = (char *)((ulonglong)local_res10 & 0xffffffff00000000);
  *param_2 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar5 = 0;
  if ((~*(byte *)param_3 & 1) != 0) {
    if ((*(byte *)param_3 >> 1 & 1) != 0) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar6 = FUN_144bdc640(local_1e0);
          local_208 = 1;
          local_200 = FUN_144f92e90;
          local_1f8 = (ulonglong ******)param_3;
          lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::SUBTYPE.",&local_208,0);
          *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x1bc;
          FUN_144bdc690(local_1e0);
        }
        else {
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_208 = 1;
          local_200 = FUN_144f92e90;
          local_1f8 = (ulonglong ******)param_3;
          lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::SUBTYPE.",&local_208,0);
          *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x1bc;
          FUN_144bdc8a0(local_190);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    if ((*(uint *)param_3 >> 10 & 1) != 0) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      uVar11 = uVar12;
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar11 = 4;
          uVar6 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar11 = 8;
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::FUNCTIONS.",&local_208,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x1bd;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((uVar11 & 8) != 0) {
          uVar11 = uVar11 & 0xfffffff7;
          FUN_144bdc8a0(local_190);
        }
        if ((uVar11 & 4) != 0) {
          uVar11 = uVar11 & 0xfffffffb;
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    if ((*(uint *)param_3 >> 0xe & 1) != 0) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar11 = uVar11 | 0x10;
          uVar6 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar11 = uVar11 | 0x20;
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::INTERFACES.",&local_208,0)
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1be;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((uVar11 & 0x20) != 0) {
          uVar11 = uVar11 & 0xffffffdf;
          FUN_144bdc8a0(local_190);
        }
        if ((uVar11 & 0x10) != 0) {
          uVar11 = uVar11 & 0xffffffef;
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    if ((*(uint *)param_3 >> 0xd & 1) != 0) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar11 = uVar11 | 0x40;
          uVar6 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar11 = uVar11 | 0x80;
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::INHERITANCE.",&local_208,0
                             );
        *(undefined8 *)(lVar7 + 0x40) = 0x1bf;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((char)uVar11 < '\0') {
          uVar11 = uVar11 & 0xffffff7f;
          FUN_144bdc8a0(local_190);
        }
        if ((uVar11 & 0x40) != 0) {
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    if ((*(byte *)param_3 >> 6 & 1) != 0) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 != '\0') {
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        else {
          uVar6 = FUN_144bdc640(local_1e0);
        }
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::DEF_CONSTRUCTOR.",
                              &local_208,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x1c0;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if (cVar4 != '\0') {
          FUN_144bdc8a0(local_190);
        }
        else {
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    if ((~(byte)(*(uint *)param_3 >> 8) & 1) == 0) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 != '\0') {
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        else {
          uVar6 = FUN_144bdc640(local_1e0);
        }
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::DESTRUCTOR.",&local_208,0)
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1c1;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if (cVar4 != '\0') {
          FUN_144bdc8a0(local_190);
        }
        else {
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    if ((~(byte)(*(uint *)param_3 >> 0x17) & 1) != 0) {
      return param_2;
    }
    FUN_144f8aee0(param_2);
    lVar7 = *(longlong *)(*param_1 + 0x28);
    if (lVar7 == 0) {
      return param_2;
    }
    if ((*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) &&
       (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) {
      return param_2;
    }
    cVar4 = FUN_144bdbf80();
    if (cVar4 != '\0') {
      uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                            *(undefined1 *)(*param_1 + 0x30));
    }
    else {
      uVar6 = FUN_144bdc640(local_1e0);
    }
    local_208 = 1;
    local_200 = FUN_144f92e90;
    local_1f8 = (ulonglong ******)param_3;
    lVar7 = FUN_144bdc480(uVar6,"Decorator type \'{}\' has local Opt::DECLS.",&local_208,0);
    *(undefined8 *)(lVar7 + 0x40) = 0x1c2;
    *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
    if (cVar4 == '\0') {
      FUN_144bdc690(local_1e0);
      return param_2;
    }
    FUN_144bdc8a0(local_190);
    return param_2;
  }
  puVar8 = (uint *)FUN_144bef800(param_3,&local_res10);
  switch(*puVar8 & 0x1f) {
  case 0:
  case 1:
    local_res10._4_4_ = 5;
    local_res10._0_4_ = 3;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    local_res10._0_4_ = 7;
    local_res10._4_4_ = 5;
    break;
  case 6:
    local_res10._4_4_ = 7;
    local_res10._0_4_ = 7;
    break;
  case 7:
    local_res10._4_4_ = 5;
    local_res10._0_4_ = 0x800007;
    break;
  case 8:
    local_res10._4_4_ = 7;
    local_res10._0_4_ = 7;
    break;
  default:
    FUN_144f8aee0(param_2);
    return param_2;
  }
  uVar2 = (uint)local_res10;
  local_res10 = (char *)(CONCAT44(local_res10._4_4_,(uint)local_res10) | 0x80000000000000);
  ppppppuVar3 = (ulonglong ******)local_res10;
  lVar7 = FUN_144befdb0(param_3);
  bVar13 = ~(byte)(uVar2 >> 2);
  local_res18 = (ulonglong ******)(ulonglong)CONCAT31((uint3)(uVar2 >> 10),bVar13);
  if (((bVar13 & 1) == 0) && (((uint)((ulonglong)ppppppuVar3 >> 0x22) & 1) != (uint)(lVar7 != 0))) {
    FUN_144f8aee0(param_2);
    lVar7 = *(longlong *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1e0);
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,"Invalid Impl for type \'{}\'.",&local_208,0);
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x1ed;
        FUN_144bdc690(local_1e0);
      }
      else {
        uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,"Invalid Impl for type \'{}\'.",&local_208,0);
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x1ed;
        FUN_144bdc8a0(local_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return param_2;
    }
  }
  ppppppuVar1 = *param_3;
  bVar13 = (byte)ppppppuVar1 >> 3 & 1;
  if (((ulonglong)ppppppuVar1 >> 0xf & 1) == 0) {
    if (bVar13 == 0) goto LAB_144f8c9af;
LAB_144f8c786:
    if (((((ulonglong)ppppppuVar1 & 8) == 0) ||
        (puVar9 = (undefined8 *)FUN_144befea0(param_3,8), puVar9 == (undefined8 *)0x0)) ||
       ((char *)*puVar9 == (char *)0x0)) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      uVar11 = uVar5;
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        lVar7 = *param_1;
        if (cVar4 == '\0') {
          uVar11 = 0x40000;
          local_res18 = (ulonglong ******)param_3;
          uVar6 = FUN_144bdc640(local_1e0,*(undefined8 *)(lVar7 + 0x28),
                                *(undefined1 *)(lVar7 + 0x30));
          local_1f8 = (ulonglong ******)&local_res18;
        }
        else {
          uVar11 = 0x80000;
          local_res20 = (ulonglong ******)param_3;
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(lVar7 + 0x28),
                                *(undefined1 *)(lVar7 + 0x30));
          local_1f8 = (ulonglong ******)&local_res20;
        }
        local_200 = FUN_144f92f00;
        local_208 = 1;
        lVar7 = FUN_144bdc480(uVar6,"Type {} has a null Opt::NAME",&local_208,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x1f6;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if (uVar11 >> 0x13 != 0) {
          uVar11 = uVar11 & 0xfff7ffff;
          FUN_144bdc8a0(local_190);
        }
        if ((uVar11 >> 0x12 & 1) != 0) {
          uVar11 = uVar11 & 0xfffbffff;
          goto LAB_144f8c999;
        }
      }
    }
    else {
      if (*(char *)*puVar9 != '\0') goto LAB_144f8c9af;
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      uVar11 = uVar12;
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), uVar11 = uVar5, cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        lVar7 = *param_1;
        if (cVar4 == '\0') {
          uVar11 = 0x100000;
          local_res18 = (ulonglong ******)param_3;
          uVar6 = FUN_144bdc640(local_1e0,*(undefined8 *)(lVar7 + 0x28),
                                *(undefined1 *)(lVar7 + 0x30));
          local_1f8 = (ulonglong ******)&local_res18;
        }
        else {
          uVar11 = 0x200000;
          local_res20 = (ulonglong ******)param_3;
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(lVar7 + 0x28),
                                *(undefined1 *)(lVar7 + 0x30));
          local_1f8 = (ulonglong ******)&local_res20;
        }
        local_200 = FUN_144f92f00;
        local_208 = 1;
        lVar7 = FUN_144bdc480(uVar6,"Type {} has an empty Opt::NAME",&local_208,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x1f9;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if (uVar11 >> 0x15 != 0) {
          uVar11 = uVar11 & 0xffdfffff;
          FUN_144bdc8a0(local_190);
        }
        if ((uVar11 >> 0x14 & 1) != 0) {
          uVar11 = uVar11 & 0xffefffff;
          goto LAB_144f8c999;
        }
      }
    }
  }
  else {
    if (bVar13 != 0) goto LAB_144f8c786;
    FUN_144f8aee0(param_2);
    lVar7 = *(longlong *)(*param_1 + 0x28);
    uVar11 = uVar12;
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar11 = 0x10000;
        uVar6 = FUN_144bdc640(local_1e0);
      }
      else {
        uVar11 = 0x20000;
        uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
      }
      local_208 = 1;
      local_200 = FUN_144f92e90;
      local_1f8 = (ulonglong ******)param_3;
      lVar7 = FUN_144bdc480(uVar6,"Type \'{}\' has local Opt::TEMPLATE but no local Opt::NAME.",
                            &local_208,0);
      *(undefined8 *)(lVar7 + 0x40) = 0x1f1;
      *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
      if (uVar11 >> 0x11 != 0) {
        uVar11 = uVar11 & 0xfffdffff;
        FUN_144bdc8a0(local_190);
      }
      if ((uVar11 >> 0x10 & 1) == 0) goto LAB_144f8c9a3;
      uVar11 = uVar11 & 0xfffeffff;
LAB_144f8c999:
      FUN_144bdc690(local_1e0);
    }
  }
LAB_144f8c9a3:
  if (*(char *)*param_1 != '\0') {
    return param_2;
  }
LAB_144f8c9af:
  uVar12 = local_res10._4_4_;
  if (((~(byte)uVar2 & 1) == 0) && (((*(byte *)param_3 ^ local_res10._4_4_) & 1) != 0)) {
    FUN_144f8aee0(param_2);
    lVar7 = *(longlong *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        if ((uVar2 & 1) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = uVar12 & 1;
        }
        local_res10 = "found but not expected";
        if (uVar5 != 0) {
          local_res10 = "expected but not found";
        }
        uVar11 = uVar11 | 0x400000;
        uVar6 = FUN_144bdc640(local_1e0,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_1e8 = (ulonglong ******)&local_res10;
      }
      else {
        if ((uVar2 & 1) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = uVar12 & 1;
        }
        local_res18 = (ulonglong ******)0x149c14468;
        if (uVar5 != 0) {
          local_res18 = (ulonglong ******)0x149c14450;
        }
        uVar11 = uVar11 | 0x800000;
        uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_1e8 = (ulonglong ******)&local_res18;
      }
      local_1f0 = FUN_144f50c70;
      local_200 = FUN_144f92e90;
      local_208 = 2;
      local_1f8 = (ulonglong ******)param_3;
      lVar7 = FUN_144bdc480(uVar6,"Type \'{}\' has unexpected Opt::FORMAT ({}).",&local_208,0);
      *(undefined8 *)(lVar7 + 0x40) = 0x1fd;
      *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
      if (uVar11 >> 0x17 != 0) {
        uVar11 = uVar11 & 0xff7fffff;
        FUN_144bdc8a0(local_190);
      }
      if ((uVar11 >> 0x16 & 1) != 0) {
        uVar11 = uVar11 & 0xffbfffff;
        FUN_144bdc690(local_1e0);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return param_2;
    }
  }
  if (((~(byte)((ulonglong)ppppppuVar3 >> 1) & 1) == 0) &&
     (((*(uint *)param_3 ^ uVar12) >> 1 & 1) != 0)) {
    FUN_144f8aee0(param_2);
    lVar7 = *(longlong *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      lVar7 = *param_1;
      if (cVar4 == '\0') {
        uVar5 = uVar12 >> 1 & 1;
        if ((uVar2 & 2) == 0) {
          uVar5 = 0xffffffff;
        }
        local_res10 = "found but not expected";
        if (uVar5 != 0) {
          local_res10 = "expected but not found";
        }
        uVar11 = uVar11 | 0x1000000;
        uVar6 = FUN_144bdc640(local_1e0,*(undefined8 *)(lVar7 + 0x28),*(undefined1 *)(lVar7 + 0x30))
        ;
        local_1e8 = (ulonglong ******)&local_res10;
      }
      else {
        uVar5 = uVar12 >> 1 & 1;
        if ((uVar2 & 2) == 0) {
          uVar5 = 0xffffffff;
        }
        local_res18 = (ulonglong ******)0x149c14468;
        if (uVar5 != 0) {
          local_res18 = (ulonglong ******)0x149c14450;
        }
        uVar11 = uVar11 | 0x2000000;
        uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(lVar7 + 0x28),*(undefined1 *)(lVar7 + 0x30))
        ;
        local_1e8 = (ulonglong ******)&local_res18;
      }
      local_1f0 = FUN_144f50c70;
      local_200 = FUN_144f92e90;
      local_208 = 2;
      local_1f8 = (ulonglong ******)param_3;
      lVar7 = FUN_144bdc480(uVar6,"Type \'{}\' has unexpected Opt::SUBTYPE ({}).",&local_208,0);
      *(undefined8 *)(lVar7 + 0x40) = 0x1fe;
      *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
      if (uVar11 >> 0x19 != 0) {
        uVar11 = uVar11 & 0xfdffffff;
        FUN_144bdc8a0(local_190);
      }
      if ((uVar11 >> 0x18 & 1) != 0) {
        uVar11 = uVar11 & 0xfeffffff;
        FUN_144bdc690(local_1e0);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return param_2;
    }
  }
  if (((~(byte)((ulonglong)ppppppuVar3 >> 0x17) & 1) == 0) &&
     (((*(uint *)param_3 ^ uVar12) >> 0x17 & 1) != 0)) {
    FUN_144f8aee0(param_2);
    lVar7 = *(longlong *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      lVar7 = *param_1;
      uVar12 = uVar12 >> 0x17 & 1;
      if (cVar4 == '\0') {
        if (uVar2 >> 0x17 == 0) {
          uVar12 = 0xffffffff;
        }
        local_res10 = "found but not expected";
        if (uVar12 != 0) {
          local_res10 = "expected but not found";
        }
        uVar11 = uVar11 | 0x4000000;
        uVar6 = FUN_144bdc640(local_1e0,*(undefined8 *)(lVar7 + 0x28),*(undefined1 *)(lVar7 + 0x30))
        ;
        local_1e8 = (ulonglong ******)&local_res10;
      }
      else {
        if (uVar2 >> 0x17 == 0) {
          uVar12 = 0xffffffff;
        }
        local_res18 = (ulonglong ******)0x149c14468;
        if (uVar12 != 0) {
          local_res18 = (ulonglong ******)0x149c14450;
        }
        uVar11 = uVar11 | 0x8000000;
        uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(lVar7 + 0x28),*(undefined1 *)(lVar7 + 0x30))
        ;
        local_1e8 = (ulonglong ******)&local_res18;
      }
      local_1f0 = FUN_144f50c70;
      local_200 = FUN_144f92e90;
      local_208 = 2;
      local_1f8 = (ulonglong ******)param_3;
      lVar7 = FUN_144bdc480(uVar6,"Type \'{}\' has unexpected Opt::DECLS ({}).",&local_208,0);
      *(undefined8 *)(lVar7 + 0x40) = 0x1ff;
      *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
      if (uVar11 >> 0x1b != 0) {
        uVar11 = uVar11 & 0xf7ffffff;
        FUN_144bdc8a0(local_190);
      }
      if ((uVar11 >> 0x1a & 1) != 0) {
        uVar11 = uVar11 & 0xfbffffff;
        FUN_144bdc690(local_1e0);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return param_2;
    }
  }
  puVar8 = (uint *)FUN_144b45d50(param_3,&local_res10);
  if ((*puVar8 >> 1 & 1) != 0) {
    plVar10 = (longlong *)FUN_144befe50(param_3,0x40);
    if ((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar11 = uVar11 | 0x10000000;
          uVar6 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar11 = uVar11 | 0x20000000;
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,
                              "Type \'{}\' is abstract and should not have a default constructor.",
                              &local_208,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x203;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if (uVar11 >> 0x1d != 0) {
          uVar11 = uVar11 & 0xdfffffff;
          FUN_144bdc8a0(local_190);
        }
        if ((uVar11 >> 0x1c & 1) != 0) {
          uVar11 = uVar11 & 0xefffffff;
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    plVar10 = (longlong *)FUN_144befe50(param_3,0x80);
    if ((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) {
      FUN_144f8aee0(param_2);
      lVar7 = *(longlong *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar11 = uVar11 | 0x40000000;
          uVar6 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar11 = uVar11 | 0x80000000;
          uVar6 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = (ulonglong ******)param_3;
        lVar7 = FUN_144bdc480(uVar6,
                              "Type \'{}\' is abstract and should not have a copy constructor.",
                              &local_208,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x204;
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((int)uVar11 < 0) {
          FUN_144bdc8a0(local_190);
        }
        if ((uVar11 >> 0x1e & 1) != 0) {
          FUN_144bdc690(local_1e0);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 144f8d080 FUN_144f8d080 body=1103 status=ok
// SIG undefined FUN_144f8d080(void)

undefined4 * FUN_144f8d080(longlong *param_1,undefined4 *param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar8;
  char *local_res10 [2];
  longlong local_res20;
  undefined8 local_218;
  code *local_210;
  ulonglong local_208;
  code *local_200;
  char **local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  ulonglong uVar7;
  
  local_res10[0] = (char *)((ulonglong)local_res10[0] & 0xffffffff00000000);
  *param_2 = 0;
  FUN_144bef820(param_3,&local_1f0);
  uVar7 = 0;
  plVar8 = local_1f0;
  do {
    if (plVar8 == local_1e8) {
      return param_2;
    }
    local_res20 = *plVar8;
    if (*(longlong *)(local_res20 + 8) == 0) {
      FUN_144f8aee0(param_2);
      lVar3 = *(longlong *)(*param_1 + 0x28);
      if ((lVar3 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar3 + 0x50) ||
          (cVar1 = FUN_144bdbf80(), cVar1 != '\0')))) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar6 = (uint)uVar7 | 1;
          uVar2 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar6 = (uint)uVar7 | 2;
          uVar2 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_218 = 1;
        local_210 = FUN_144f92e90;
        local_208 = param_3;
        lVar3 = FUN_144bdc480(uVar2,"Record type \'{}\' has a field with no parent.",&local_218,0);
        *(undefined8 *)(lVar3 + 0x40) = 0x210;
        *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((uVar6 & 2) != 0) {
          uVar6 = uVar6 & 0xfffffffd;
          FUN_144bdc8a0(local_190);
        }
        uVar7 = (ulonglong)uVar6;
        if ((uVar6 & 1) != 0) {
          uVar7 = (ulonglong)(uVar6 & 0xfffffffe);
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    pcVar4 = (char *)FUN_144bf0530(&local_res20);
    local_res10[0] = pcVar4;
    if (pcVar4 == (char *)0x0) {
      FUN_144f8aee0(param_2);
      lVar3 = *(longlong *)(*param_1 + 0x28);
      if ((lVar3 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar3 + 0x50) ||
          (cVar1 = FUN_144bdbf80(), pcVar4 = local_res10[0], cVar1 != '\0')))) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar6 = (uint)uVar7 | 4;
          uVar2 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar6 = (uint)uVar7 | 8;
          uVar2 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_218 = 1;
        local_210 = FUN_144f92e90;
        local_208 = param_3;
        lVar3 = FUN_144bdc480(uVar2,"Record type \'{}\' has a field with no name.",&local_218,0);
        *(undefined8 *)(lVar3 + 0x40) = 0x214;
        *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((uVar6 & 8) != 0) {
          uVar6 = uVar6 & 0xfffffff7;
          FUN_144bdc8a0(local_190);
        }
        uVar7 = (ulonglong)uVar6;
        pcVar4 = local_res10[0];
        if ((uVar6 & 4) != 0) {
          uVar7 = (ulonglong)(uVar6 & 0xfffffffb);
          FUN_144bdc690(local_1e0);
          pcVar4 = local_res10[0];
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) {
      FUN_144f8aee0(param_2);
      lVar3 = *(longlong *)(*param_1 + 0x28);
      if ((lVar3 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar3 + 0x50) ||
          (cVar1 = FUN_144bdbf80(), cVar1 != '\0')))) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar6 = (uint)uVar7 | 0x10;
          uVar2 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar6 = (uint)uVar7 | 0x20;
          uVar2 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_218 = 1;
        local_210 = FUN_144f92e90;
        local_208 = param_3;
        lVar3 = FUN_144bdc480(uVar2,"Record type \'{}\' has a field with an empty name.",&local_218,
                              0);
        *(undefined8 *)(lVar3 + 0x40) = 0x217;
        *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((uVar6 & 0x20) != 0) {
          uVar6 = uVar6 & 0xffffffdf;
          FUN_144bdc8a0(local_190);
        }
        uVar7 = (ulonglong)uVar6;
        if ((uVar6 & 0x10) != 0) {
          uVar7 = (ulonglong)(uVar6 & 0xffffffef);
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    uVar5 = 0;
    if (local_res20 != 0) {
      uVar5 = FUN_144bef220();
    }
    if (uVar5 != param_3) {
      FUN_144f8aee0(param_2);
      lVar3 = *(longlong *)(*param_1 + 0x28);
      if ((lVar3 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar3 + 0x50) ||
          (cVar1 = FUN_144bdbf80(), cVar1 != '\0')))) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar6 = (uint)uVar7 | 0x40;
          uVar2 = FUN_144bdc640(local_1e0);
        }
        else {
          uVar6 = (uint)uVar7 | 0x80;
          uVar2 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_218 = 2;
        local_210 = FUN_144f92e90;
        local_200 = FUN_144f50c70;
        local_1f8 = local_res10;
        local_208 = param_3;
        lVar3 = FUN_144bdc480(uVar2,
                              "Record type \'{}\' has field \'{}\' with DECL context missing or pointing to another type."
                              ,&local_218,0);
        *(undefined8 *)(lVar3 + 0x40) = 0x21c;
        *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((char)uVar6 < '\0') {
          uVar6 = uVar6 & 0xffffff7f;
          FUN_144bdc8a0(local_190);
        }
        uVar7 = (ulonglong)uVar6;
        if ((uVar6 & 0x40) != 0) {
          uVar7 = (ulonglong)(uVar6 & 0xffffffbf);
          FUN_144bdc690(local_1e0);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return param_2;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 144f8d4d0 FUN_144f8d4d0 body=1635 status=ok
// SIG undefined FUN_144f8d4d0(void)

/* WARNING: Removing unreachable block (ram,0x000144f8dac3) */

undefined4 * FUN_144f8d4d0(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  char local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_288;
  int local_280 [2];
  undefined8 local_278;
  code *local_270;
  longlong local_268;
  code *local_260;
  undefined8 *local_258;
  code *local_250;
  int *local_248;
  code *local_240;
  int *local_238;
  code *local_230;
  undefined4 *local_228;
  code *local_220;
  int *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  int local_208;
  int local_204;
  undefined1 local_200 [8];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  *param_2 = 0;
  puVar10 = (undefined4 *)FUN_144bef800(param_3,local_res10);
  lVar14 = 0;
  if (((byte)*puVar10 & 0x1f) == 7) {
    lVar14 = param_3;
  }
  if (lVar14 == 0) {
    return param_2;
  }
  puVar11 = (uint *)FUN_144b45d50(param_3,local_res10);
  if ((~(byte)(*puVar11 >> 9) & 1) != 0) {
    pbVar12 = (byte *)FUN_144b45d50(param_3,local_res10);
    local_res10[0] = '\x01';
    if ((*pbVar12 & 3) == 0) goto LAB_144f8d577;
  }
  local_res10[0] = '\0';
LAB_144f8d577:
  local_res20[0] = FUN_144beec90(param_3);
  iVar15 = -1;
  iVar9 = 0;
  FUN_144bef8b0(param_3,&local_1f0);
  local_1f8 = local_1e8;
  puVar16 = local_1f0;
  if (local_1f0 != local_1e8) {
    do {
      local_288 = *puVar16;
      local_res18[0] = FUN_144bf0700(&local_288);
      if (local_res18[0] < 0) {
        FUN_144f8aee0(param_2);
        lVar14 = *(longlong *)(*param_1 + 0x28);
        if ((lVar14 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50) ||
            (cVar8 = FUN_144bdbf80(), cVar8 != '\0')))) {
          cVar8 = FUN_144bdbf80();
          if (cVar8 == '\0') {
            bVar1 = true;
            uVar13 = FUN_144bdc640(local_1e0);
          }
          else {
            bVar2 = true;
            uVar13 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                   *(undefined1 *)(*param_1 + 0x30));
          }
          local_278 = 2;
          local_270 = FUN_144f92e90;
          local_260 = FUN_144f92f30;
          local_258 = &local_288;
          local_268 = param_3;
          lVar14 = FUN_144bdc480(uVar13,"Record type \'{}\' has field \'{}\' with negative offset.",
                                 &local_278,0);
          *(undefined8 *)(lVar14 + 0x40) = 0x237;
          *(char **)(lVar14 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          if (bVar2) {
            bVar2 = false;
            FUN_144bdc8a0(local_190);
          }
          if (bVar1) {
            bVar1 = false;
            FUN_144bdc690(local_1e0);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return param_2;
        }
      }
      local_280[0] = FUN_144beec90(local_288);
      local_280[0] = local_res18[0] + local_280[0];
      if (local_res20[0] < local_280[0]) {
        FUN_144f8aee0(param_2);
        lVar14 = *(longlong *)(*param_1 + 0x28);
        if ((lVar14 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50) ||
            (cVar8 = FUN_144bdbf80(), cVar8 != '\0')))) {
          cVar8 = FUN_144bdbf80();
          if (cVar8 == '\0') {
            local_210 = FUN_144beec90(local_288);
            bVar4 = true;
            uVar13 = FUN_144bdc640(local_1e0,*(undefined8 *)(*param_1 + 0x28),
                                   *(undefined1 *)(*param_1 + 0x30));
            local_228 = &local_210;
          }
          else {
            local_20c = FUN_144beec90(local_288);
            bVar3 = true;
            uVar13 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                   *(undefined1 *)(*param_1 + 0x30));
            local_228 = &local_20c;
          }
          local_238 = local_res18;
          local_248 = local_280;
          local_258 = &local_288;
          local_260 = FUN_144f92f30;
          local_270 = FUN_144f92e90;
          local_218 = local_res20;
          local_250 = FUN_144f50970;
          local_240 = FUN_144f50970;
          local_230 = FUN_144f50970;
          local_220 = FUN_144f50970;
          local_278 = 6;
          local_268 = param_3;
          lVar14 = FUN_144bdc480(uVar13,
                                 "Record type \'{}\' has field \'{}\' with offset + size {} ({} + {}) greater than total type size {}."
                                 ,&local_278,0);
          *(undefined8 *)(lVar14 + 0x40) = 0x239;
          *(char **)(lVar14 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          if (bVar3) {
            bVar3 = false;
            FUN_144bdc8a0(local_190);
          }
          if (bVar4) {
            bVar4 = false;
            FUN_144bdc690(local_1e0);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return param_2;
        }
      }
      iVar15 = iVar15 + iVar9;
      if (local_res18[0] < iVar15) {
        FUN_144f8aee0(param_2);
        lVar14 = *(longlong *)(*param_1 + 0x28);
        if ((lVar14 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50) ||
            (cVar8 = FUN_144bdbf80(), cVar8 != '\0')))) {
          cVar8 = FUN_144bdbf80();
          lVar14 = *param_1;
          if (cVar8 == '\0') {
            bVar6 = true;
            local_208 = iVar15;
            uVar13 = FUN_144bdc640(local_1e0,*(undefined8 *)(lVar14 + 0x28),
                                   *(undefined1 *)(lVar14 + 0x30));
            local_238 = &local_208;
          }
          else {
            bVar5 = true;
            local_204 = iVar15;
            uVar13 = FUN_144bdc810(local_190,*(undefined8 *)(lVar14 + 0x28),
                                   *(undefined1 *)(lVar14 + 0x30));
            local_238 = &local_204;
          }
          local_248 = local_res18;
          local_258 = &local_288;
          local_240 = FUN_144f50970;
          local_250 = FUN_144f50970;
          local_260 = FUN_144f92f30;
          local_270 = FUN_144f92e90;
          local_278 = 4;
          local_268 = param_3;
          lVar14 = FUN_144bdc480(uVar13,
                                 "Record type \'{}\' has field \'{}\' with offset {} less than the previous one + size {}. This means that fields either overlap or are not sorted."
                                 ,&local_278,0);
          *(undefined8 *)(lVar14 + 0x40) = 0x23c;
          *(char **)(lVar14 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          if (bVar5) {
            bVar5 = false;
            FUN_144bdc8a0(local_190);
          }
          if (bVar6) {
            bVar6 = false;
            FUN_144bdc690(local_1e0);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return param_2;
        }
      }
      iVar15 = local_res18[0];
      iVar9 = FUN_144beec90(local_288);
      if ((local_res10[0] != '\0') &&
         (puVar11 = (uint *)FUN_144b45d50(local_288,local_200), (~(byte)(*puVar11 >> 9) & 1) == 0))
      {
        FUN_144f8aee0(param_2);
        lVar14 = *(longlong *)(*param_1 + 0x28);
        if ((lVar14 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50) ||
            (cVar8 = FUN_144bdbf80(), cVar8 != '\0')))) {
          cVar8 = FUN_144bdbf80();
          if (cVar8 == '\0') {
            bVar7 = true;
            uVar13 = FUN_144bdc640(local_1e0);
          }
          else {
            uVar13 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                   *(undefined1 *)(*param_1 + 0x30));
          }
          local_278 = 2;
          local_270 = FUN_144f92e90;
          local_260 = FUN_144f92f30;
          local_258 = &local_288;
          local_268 = param_3;
          lVar14 = FUN_144bdc480(uVar13,
                                 "Record type \'{}\' is retargetable, but it has field \'{}\' which is not retargetable. The record should be non-retargetable"
                                 ,&local_278,0);
          *(undefined8 *)(lVar14 + 0x40) = 0x242;
          *(char **)(lVar14 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          if (bVar7) {
            bVar7 = false;
            FUN_144bdc690(local_1e0);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return param_2;
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != local_1f8);
  }
  return param_2;
}



// FUNCTION 144f8db40 FUN_144f8db40 body=7234 status=ok
// SIG undefined FUN_144f8db40(void)

/* WARNING: Type propagation algorithm not settling */

uint * FUN_144f8db40(longlong *param_1,uint *param_2,uint *******param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  uint ******ppppppuVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *******pppppppuVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  uint *puVar17;
  uint ******ppppppuVar18;
  longlong lVar19;
  uint uVar20;
  uint *******pppppppuVar21;
  int iVar23;
  uint *******pppppppuVar24;
  uint *******pppppppuVar25;
  uint uVar26;
  longlong *plVar27;
  uint *******local_res18;
  ulonglong local_res20;
  uint local_748 [2];
  code *local_740;
  code *pcStack_738;
  uint *******local_730;
  code *pcStack_728;
  uint *******local_720;
  code *pcStack_718;
  uint *******local_710;
  code *pcStack_708;
  ulonglong *local_700;
  uint ******local_6f0;
  uint ******local_6e8;
  code *pcStack_6e0;
  uint *******local_6d8;
  code *pcStack_6d0;
  uint *******local_6c8;
  code *pcStack_6c0;
  uint *******local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  ulonglong *local_6a8;
  uint ******local_6a0;
  uint ******local_698;
  int local_690 [2];
  uint *******local_688;
  longlong local_680;
  int local_678;
  uint local_674;
  uint *******local_670;
  uint *******local_668;
  uint *******pppppppuStack_660;
  uint *******local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  uint *******local_648;
  undefined8 *local_618;
  undefined8 *local_610;
  undefined1 local_608 [8];
  undefined1 local_600 [80];
  undefined1 local_5b0 [8];
  undefined1 local_5a8 [336];
  undefined1 *local_458;
  int local_450;
  uint local_44c;
  undefined1 local_448 [1032];
  uint *******pppppppuVar22;
  
  pppppppuVar25 = (uint *******)&local_668;
  pppppppuVar24 = (uint *******)0x0;
  pppppppuVar21 = (uint *******)0x0;
  local_res20 = local_res20 & 0xffffffff00000000;
  local_748[0] = 0;
  local_res18 = param_3;
  lVar9 = FUN_144befe50(param_3,1);
  pppppppuVar22 = local_res18;
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(*param_1 + 0x28);
    if ((lVar9 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
        (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
      cVar6 = FUN_144bdbf80();
      if (cVar6 == '\0') {
        uVar10 = FUN_144bdc640(&local_740);
        local_res20 = 0;
        lVar9 = FUN_144bdc480(uVar10,"Every type must have an Opt::FORMAT in its hierarchy",
                              &local_res20,0);
        *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x253;
        *(undefined4 *)(lVar9 + 0x1c) = 0xb73f79e0;
        FUN_144bdc690(&local_740);
      }
      else {
        uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
        local_688 = (uint *******)0x0;
        lVar9 = FUN_144bdc480(uVar10,"Every type must have an Opt::FORMAT in its hierarchy",
                              &local_688,0);
        *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x253;
        *(undefined4 *)(lVar9 + 0x1c) = 0xb73f79e0;
        FUN_144bdc8a0(local_5a8);
      }
    }
    local_res18 = (uint *******)((ulonglong)local_res18 & 0xffffffff00000000);
    FUN_144f8aee0(&local_res18);
    *param_2 = (uint)local_res18;
    return param_2;
  }
  puVar11 = (undefined4 *)FUN_144bef800(local_res18,&local_res20);
  pppppppuVar13 = pppppppuVar24;
  if (((byte)*puVar11 & 0x1f) == 1) {
    pppppppuVar13 = pppppppuVar22;
  }
  if ((pppppppuVar13 != (uint *******)0x0) && (iVar7 = FUN_144beec90(pppppppuVar22), iVar7 != 0)) {
    *param_2 = 0;
    return param_2;
  }
  piVar12 = (int *)FUN_144f90110(param_1,&local_res20,local_res18);
  if ((-1 < *piVar12) || (FUN_144f8aee0(local_748), *(char *)*param_1 == '\0')) {
    pppppppuVar22 = local_res18;
    puVar11 = (undefined4 *)FUN_144bef800(local_res18,&local_res20);
    pppppppuVar13 = pppppppuVar24;
    if (((byte)*puVar11 & 0x1f) == 7) {
      pppppppuVar13 = pppppppuVar22;
    }
    pppppppuVar22 = pppppppuVar24;
    if (pppppppuVar13 != (uint *******)0x0) {
      lVar9 = FUN_144f69980(local_res18);
      local_6f0 = *(uint *******)(lVar9 + 8);
      pppppppuVar22 = pppppppuVar21;
      if (local_6f0 != (uint ******)0x0) {
        iVar7 = FUN_144beec90();
        iVar8 = FUN_144beec90(local_res18);
        if (iVar8 < iVar7) {
          FUN_144f8aee0(local_748);
          lVar9 = *(longlong *)(*param_1 + 0x28);
          if ((lVar9 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
              (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
            cVar6 = FUN_144bdbf80();
            if (cVar6 == '\0') {
              uVar10 = FUN_144bdc640(pppppppuVar25);
              local_730 = (uint *******)&local_res18;
              local_740 = (code *)0x2;
              local_720 = &local_6f0;
              pcStack_738 = FUN_144bf0db0;
              pcStack_728 = FUN_144bf0db0;
              local_6e8 = (uint ******)0x2;
              pcStack_6e0 = FUN_144bf0db0;
              pcStack_6d0 = FUN_144bf0db0;
              local_6d8 = local_730;
              local_6c8 = local_720;
              lVar9 = FUN_144bdc480(uVar10,"Type \'{}\' is smaller than parent type \'{}\'",
                                    &local_6e8,0);
              *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar9 + 0x40) = 0x261;
              FUN_144bdc690(pppppppuVar25);
            }
            else {
              uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                     *(undefined1 *)(*param_1 + 0x30));
              local_730 = (uint *******)&local_res18;
              local_740 = (code *)0x2;
              local_720 = &local_6f0;
              pcStack_738 = FUN_144bf0db0;
              pcStack_728 = FUN_144bf0db0;
              local_6e8 = (uint ******)0x2;
              pcStack_6e0 = FUN_144bf0db0;
              pcStack_6d0 = FUN_144bf0db0;
              local_6d8 = local_730;
              local_6c8 = local_720;
              lVar9 = FUN_144bdc480(uVar10,"Type \'{}\' is smaller than parent type \'{}\'",
                                    &local_6e8,0);
              *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar9 + 0x40) = 0x261;
              FUN_144bdc8a0(local_5a8);
            }
          }
          if (*(char *)*param_1 != '\0') goto LAB_144f8f74b;
        }
        plVar14 = (longlong *)FUN_144bef8b0(local_6f0,pppppppuVar25);
        if (((int)(plVar14[1] - *plVar14 >> 3) != 0) &&
           (plVar14 = (longlong *)FUN_144bef8b0(local_res18,pppppppuVar25),
           (int)(plVar14[1] - *plVar14 >> 3) != 0)) {
          lVar9 = FUN_144bef8b0(local_6f0,pppppppuVar25);
          local_698 = *(uint *******)(*(longlong *)(lVar9 + 8) + -8);
          iVar7 = FUN_144beec90();
          iVar8 = FUN_144bf0700(&local_698);
          local_res20 = CONCAT44(local_res20._4_4_,iVar8 + iVar7);
          puVar15 = (undefined8 *)FUN_144bef8b0(local_res18,pppppppuVar25);
          local_690[0] = FUN_144bf0700(*puVar15);
          if (local_690[0] < (int)local_res20) {
            FUN_144f8aee0(local_748);
            lVar9 = *(longlong *)(*param_1 + 0x28);
            pppppppuVar22 = pppppppuVar24;
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (cVar6 = FUN_144bdbf80(), pppppppuVar22 = pppppppuVar21, cVar6 != '\0')))) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 == '\0') {
                uVar20 = 0x10;
                puVar15 = (undefined8 *)FUN_144bef8b0(local_res18,pppppppuVar25);
                pppppppuVar22 = (uint *******)*puVar15;
                uVar10 = FUN_144bdc640(local_600,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
              }
              else {
                uVar20 = 0x20;
                puVar15 = (undefined8 *)FUN_144bef8b0(local_res18,&local_680);
                pppppppuVar22 = (uint *******)*puVar15;
                uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
              }
              local_740 = (code *)0x4;
              pcStack_738 = FUN_144f92f30;
              pcStack_718 = FUN_144f92f30;
              local_720 = (uint *******)local_690;
              pcStack_728 = FUN_144f50970;
              local_710 = &local_698;
              local_6e8 = (uint ******)0x4;
              pcStack_6e0 = FUN_144f92f30;
              local_700 = &local_res20;
              pcStack_708 = FUN_144f50970;
              pcStack_6c0 = FUN_144f92f30;
              pcStack_6d0 = FUN_144f50970;
              uStack_6b0 = 0x44f50970;
              uStack_6ac = 1;
              local_730 = pppppppuVar22;
              local_6d8 = pppppppuVar22;
              local_6c8 = local_720;
              local_6b8 = local_710;
              local_6a8 = local_700;
              lVar9 = FUN_144bdc480(uVar10,
                                    "Field \'{}\' (starts at offset {}) overlaps with field \'{}\' in parent (ends at offset {})"
                                    ,&local_6e8,0);
              *(undefined8 *)(lVar9 + 0x40) = 0x26a;
              *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((uVar20 & 0x20) != 0) {
                uVar20 = uVar20 & 0xffffffdf;
                FUN_144bdc8a0(local_5a8);
              }
              pppppppuVar22 = (uint *******)(ulonglong)uVar20;
              if ((uVar20 & 0x10) != 0) {
                pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xffffffef);
                FUN_144bdc690(local_600);
              }
            }
            if (*(char *)*param_1 != '\0') goto LAB_144f8f74b;
          }
        }
      }
    }
    if ((((*(uint *)local_res18 >> 0xe & 1) != 0) &&
        (plVar14 = (longlong *)FUN_144befea0(local_res18,0x4000), plVar14 != (longlong *)0x0)) &&
       (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0)) {
      plVar27 = plVar14 + 1;
      iVar7 = (int)((*plVar14 << 4) >> 4);
      if (0 < iVar7) {
        do {
          local_6f0 = (uint ******)*plVar27;
          lVar9 = *param_1;
          uVar20 = (uint)pppppppuVar22;
          if (local_6f0 == (uint ******)0x0) {
            FUN_144f8aee0(local_748);
            if ((*(longlong *)(lVar9 + 0x28) != 0) &&
               ((*(byte *)(lVar9 + 0x30) <= *(byte *)(*(longlong *)(lVar9 + 0x28) + 0x50) ||
                (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 == '\0') {
                uVar20 = uVar20 | 0x40;
                uVar10 = FUN_144bdc640(local_600);
              }
              else {
                uVar20 = uVar20 | 0x80;
                uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
              }
              local_668 = (uint *******)&DAT_00000001;
              pppppppuStack_660 = (uint *******)FUN_144bf0db0;
              local_6d8 = (uint *******)&local_res18;
              local_6e8 = (uint ******)0x1;
              pcStack_6e0 = FUN_144bf0db0;
              local_658 = local_6d8;
              lVar9 = FUN_144bdc480(uVar10,"Type \'{}\' has null interface type.",&local_6e8,0);
              *(undefined8 *)(lVar9 + 0x40) = 0x277;
              *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((char)uVar20 < '\0') {
                uVar20 = uVar20 & 0xffffff7f;
                FUN_144bdc8a0(local_5a8);
              }
              pppppppuVar22 = (uint *******)(ulonglong)uVar20;
              if ((uVar20 & 0x40) != 0) {
                pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xffffffbf);
                goto LAB_144f8e596;
              }
            }
          }
          else if ((*(code **)(lVar9 + 0x10) == (code *)0x0) ||
                  (cVar6 = (**(code **)(lVar9 + 0x10))(local_6f0,*(undefined8 *)(lVar9 + 0x18)),
                  cVar6 != '\0')) {
            ppppppuVar3 = local_6f0;
            puVar11 = (undefined4 *)FUN_144bef800(local_6f0,&local_res20);
            ppppppuVar18 = (uint ******)0x0;
            if (((byte)*puVar11 & 0x1f) == 7) {
              ppppppuVar18 = ppppppuVar3;
            }
            if (ppppppuVar18 == (uint ******)0x0) {
              FUN_144f8aee0(local_748);
              lVar9 = *(longlong *)(*param_1 + 0x28);
              if ((lVar9 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                  (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
                cVar6 = FUN_144bdbf80();
                if (cVar6 == '\0') {
                  uVar20 = uVar20 | 0x400;
                  uVar10 = FUN_144bdc640(local_600);
                }
                else {
                  uVar20 = uVar20 | 0x800;
                  uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                         *(undefined1 *)(*param_1 + 0x30));
                }
                pcStack_6d0 = FUN_144bf0db0;
                pcStack_6e0 = FUN_144bf0db0;
                local_6d8 = (uint *******)&local_res18;
                local_6e8 = (uint ******)0x2;
                local_6c8 = &local_6f0;
                local_668 = (uint *******)0x2;
                pppppppuStack_660 = (uint *******)FUN_144bf0db0;
                uStack_650 = 0x44bf0db0;
                uStack_64c = 1;
                local_658 = local_6d8;
                local_648 = local_6c8;
                lVar9 = FUN_144bdc480(uVar10,
                                      "Type \'{}\' has interface \'{}\' which is not a record type."
                                      ,pppppppuVar25,0);
                *(undefined8 *)(lVar9 + 0x40) = 0x27b;
                *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                if ((uVar20 >> 0xb & 1) != 0) {
                  uVar20 = uVar20 & 0xfffff7ff;
                  FUN_144bdc8a0(local_5a8);
                }
                pppppppuVar22 = (uint *******)(ulonglong)uVar20;
                if ((uVar20 >> 10 & 1) != 0) {
                  pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xfffffbff);
LAB_144f8e596:
                  FUN_144bdc690(local_600);
                }
              }
            }
            else {
              FUN_144bf0830(&local_740,*plVar27,0);
              do {
                pcVar5 = local_740 + 8;
                if ((pcStack_738 <= local_740 + 8) &&
                   (cVar6 = FUN_144bf0850(&local_740), pcVar5 = local_740, cVar6 == '\0'))
                goto LAB_144f8e5ab;
                local_740 = pcVar5;
                pbVar16 = (byte *)FUN_144bf04d0(local_740,local_690);
              } while ((*pbVar16 & 0x20) == 0);
              FUN_144f8aee0(local_748);
              lVar9 = *(longlong *)(*param_1 + 0x28);
              if ((lVar9 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                  (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
                cVar6 = FUN_144bdbf80();
                if (cVar6 == '\0') {
                  uVar20 = uVar20 | 0x1000;
                  uVar10 = FUN_144bdc640(local_600);
                }
                else {
                  uVar20 = uVar20 | 0x2000;
                  uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                         *(undefined1 *)(*param_1 + 0x30));
                }
                pcStack_6d0 = FUN_144bf0db0;
                pcStack_6e0 = FUN_144bf0db0;
                local_6d8 = (uint *******)&local_res18;
                local_6e8 = (uint ******)0x2;
                local_6c8 = &local_6f0;
                local_668 = (uint *******)0x2;
                pppppppuStack_660 = (uint *******)FUN_144bf0db0;
                uStack_650 = 0x44bf0db0;
                uStack_64c = 1;
                local_658 = local_6d8;
                local_648 = local_6c8;
                lVar9 = FUN_144bdc480(uVar10,
                                      "Type \'{}\' has interface \'{}\' with non-empty decl array.",
                                      pppppppuVar25,0);
                *(undefined8 *)(lVar9 + 0x40) = 0x281;
                *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                if (uVar20 >> 0xd != 0) {
                  uVar20 = uVar20 & 0xffffdfff;
                  FUN_144bdc8a0(local_5a8);
                }
                pppppppuVar22 = (uint *******)(ulonglong)uVar20;
                if ((uVar20 >> 0xc & 1) != 0) {
                  pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xffffefff);
                  goto LAB_144f8e596;
                }
              }
            }
          }
          else {
            FUN_144f8aee0(local_748);
            lVar9 = *(longlong *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 == '\0') {
                uVar20 = uVar20 | 0x100;
                uVar10 = FUN_144bdc640(local_600);
              }
              else {
                uVar20 = uVar20 | 0x200;
                uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
              }
              local_668 = (uint *******)&DAT_00000001;
              pppppppuStack_660 = (uint *******)FUN_144bf0db0;
              local_6d8 = (uint *******)&local_res18;
              local_6e8 = (uint ******)0x1;
              pcStack_6e0 = FUN_144bf0db0;
              local_658 = local_6d8;
              lVar9 = FUN_144bdc480(uVar10,
                                    "Type \'{}\' has unreachable interface type (not in scope).",
                                    &local_6e8,0);
              *(undefined8 *)(lVar9 + 0x40) = 0x278;
              *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((uVar20 >> 9 & 1) != 0) {
                uVar20 = uVar20 & 0xfffffdff;
                FUN_144bdc8a0(local_5a8);
              }
              pppppppuVar22 = (uint *******)(ulonglong)uVar20;
              if ((uVar20 >> 8 & 1) != 0) {
                pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xfffffeff);
                goto LAB_144f8e596;
              }
            }
          }
          if (*(char *)*param_1 != '\0') goto LAB_144f8f74b;
LAB_144f8e5ab:
          uVar20 = (int)pppppppuVar24 + 1;
          pppppppuVar24 = (uint *******)(ulonglong)uVar20;
          plVar27 = plVar27 + 2;
        } while ((int)uVar20 < iVar7);
      }
    }
    uVar20 = (uint)pppppppuVar22;
    if ((~*(byte *)local_res18 & 1) == 0) {
      lVar9 = 0;
      local_450 = 0;
      iVar7 = 0;
      local_44c = 0x80000080;
      local_458 = local_448;
      local_680 = 0;
      pppppppuVar21 = (uint *******)local_res18[1];
      local_678 = 0;
      local_674 = 0x80000000;
      local_670 = pppppppuVar21;
      if (pppppppuVar21 != (uint *******)0x0) {
        do {
          local_670 = pppppppuVar21;
          FUN_144bef820(pppppppuVar21,&local_618);
          iVar8 = local_450 + (int)((longlong)local_610 - (longlong)local_618 >> 3);
          uVar26 = local_674;
          puVar15 = local_618;
          puVar2 = local_610;
          if ((int)(local_44c & 0x7fffffff) < iVar8) {
            FUN_144be3180(&local_458,&PTR_vftable_14c6e47a0,(longlong)iVar8);
            uVar26 = local_674;
            puVar15 = local_618;
            puVar2 = local_610;
          }
          for (; puVar4 = local_610, puVar15 != local_610; puVar15 = puVar15 + 1) {
            local_688 = (uint *******)*puVar15;
            local_610 = puVar2;
            uVar10 = FUN_144bf0530(&local_688);
            FUN_144be36a0(&local_res20,uVar10,0xffffffff);
            iVar8 = iVar7 + 1;
            if ((int)(uVar26 & 0x7fffffff) < iVar8) {
              FUN_144be4880(&local_680,&PTR_vftable_14c6e47a0,(longlong)iVar8);
              lVar9 = local_680;
              iVar7 = local_678;
              uVar26 = local_674;
            }
            puVar1 = (ulonglong *)(lVar9 + (longlong)iVar7 * 8);
            if (puVar1 != (ulonglong *)0x0) {
              *puVar1 = local_res20;
              local_res20 = 0;
            }
            local_678 = iVar8;
            FUN_144b49dd0(&local_res20);
            pppppppuVar21 = local_670;
            iVar7 = iVar8;
            puVar2 = local_610;
            local_610 = puVar4;
          }
          pppppppuVar21 = (uint *******)pppppppuVar21[1];
          local_610 = puVar2;
        } while (pppppppuVar21 != (uint *******)0x0);
        local_670 = (uint *******)0x0;
      }
      uVar26 = local_674;
      FUN_144bef820(local_res18,pppppppuVar25);
      iVar8 = local_450 + (int)((longlong)pppppppuStack_660 - (longlong)local_668 >> 3);
      local_688 = pppppppuStack_660;
      local_670 = local_668;
      if ((int)(local_44c & 0x7fffffff) < iVar8) {
        FUN_144be3180(&local_458,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      iVar8 = iVar7;
      local_688 = pppppppuStack_660;
      local_670 = local_668;
      if (local_668 != pppppppuStack_660) {
        do {
          local_6f0 = *local_670;
          local_6a0 = (uint ******)FUN_144bf0530();
          lVar19 = 0;
          iVar23 = 0;
          if (0 < local_450) {
            do {
              if (*(uint *******)(local_458 + lVar19 * 8) == local_6a0) goto LAB_144f8e7f5;
              iVar23 = iVar23 + 1;
              lVar19 = lVar19 + 1;
            } while (lVar19 < local_450);
          }
          iVar23 = -1;
LAB_144f8e7f5:
          FUN_144be36a0(&local_618,local_6a0,0xffffffff);
          iVar7 = iVar8 + 1;
          if ((int)(uVar26 & 0x7fffffff) < iVar7) {
            FUN_144be4880(&local_680,&PTR_vftable_14c6e47a0,(longlong)iVar7);
            lVar9 = local_680;
            iVar8 = local_678;
            uVar26 = local_674;
          }
          puVar15 = (undefined8 *)(lVar9 + (longlong)iVar8 * 8);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = local_618;
            local_618 = (undefined8 *)0x0;
          }
          local_678 = iVar7;
          FUN_144b49dd0(&local_618);
          if ((-1 < iVar23) &&
             ((lVar19 = *param_1, *(char *)(lVar19 + 0x20) == '\0' || (*(char *)local_6a0 != '$'))))
          {
            FUN_144f8aee0(local_748);
            if ((*(longlong *)(lVar19 + 0x28) != 0) &&
               ((*(byte *)(lVar19 + 0x30) <= *(byte *)(*(longlong *)(lVar19 + 0x28) + 0x50) ||
                (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 == '\0') {
                uVar20 = (uint)pppppppuVar22 | 0x4000;
                uVar10 = FUN_144bdc640(local_600);
              }
              else {
                uVar20 = (uint)pppppppuVar22 | 0x8000;
                uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
              }
              local_740 = (code *)0x2;
              pcStack_738 = FUN_144bf0db0;
              local_730 = (uint *******)&local_res18;
              pcStack_728 = FUN_144f50c70;
              local_720 = &local_6a0;
              local_6e8 = (uint ******)0x2;
              pcStack_6e0 = FUN_144bf0db0;
              pcStack_6d0 = FUN_144f50c70;
              local_6d8 = local_730;
              local_6c8 = local_720;
              lVar19 = FUN_144bdc480(uVar10,
                                     "Type \'{}\' has duplicate field with name \'{}\' (possibly from ancestor)."
                                     ,&local_6e8,0);
              *(undefined8 *)(lVar19 + 0x40) = 0x2a5;
              *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((uVar20 >> 0xf & 1) != 0) {
                uVar20 = uVar20 & 0xffff7fff;
                FUN_144bdc8a0(local_5a8);
              }
              pppppppuVar22 = (uint *******)(ulonglong)uVar20;
              if ((uVar20 >> 0xe & 1) != 0) {
                pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xffffbfff);
                FUN_144bdc690(local_600);
              }
            }
            if (*(char *)*param_1 != '\0') {
              *param_2 = local_748[0];
              lVar19 = lVar9 + (longlong)iVar7 * 8;
              while (lVar19 != lVar9) {
                lVar19 = lVar19 + -8;
                FUN_144b49dd0(lVar19);
              }
              goto LAB_144f8f441;
            }
          }
          lVar19 = (longlong)local_450;
          local_450 = local_450 + 1;
          if ((undefined8 *)(local_458 + lVar19 * 8) != (undefined8 *)0x0) {
            *(uint *******)(local_458 + lVar19 * 8) = local_6a0;
          }
          local_698 = local_6f0;
          uVar20 = (uint)pppppppuVar22;
          if (local_6f0 == (uint ******)0x0) {
            FUN_144f8aee0(local_748);
            lVar19 = *(longlong *)(*param_1 + 0x28);
            if ((lVar19 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar19 + 0x50) ||
                (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 == '\0') {
                uVar20 = uVar20 | 0x10000;
                uVar10 = FUN_144bdc640(local_600);
              }
              else {
                uVar20 = uVar20 | 0x20000;
                uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
              }
              local_740 = (code *)0x2;
              pcStack_738 = FUN_144f50c70;
              local_730 = &local_6a0;
              pcStack_728 = FUN_144bf0db0;
              local_720 = (uint *******)&local_res18;
              local_6e8 = (uint ******)0x2;
              pcStack_6e0 = FUN_144f50c70;
              pcStack_6d0 = FUN_144bf0db0;
              local_6d8 = local_730;
              local_6c8 = local_720;
              lVar19 = FUN_144bdc480(uVar10,"Field \'{}\' of type \'{}\' has invalid NULL type.",
                                     &local_6e8,0);
              *(undefined8 *)(lVar19 + 0x40) = 0x2aa;
              *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((uVar20 >> 0x11 & 1) != 0) {
                uVar20 = uVar20 & 0xfffdffff;
                FUN_144bdc8a0(local_5a8);
              }
              pppppppuVar22 = (uint *******)(ulonglong)uVar20;
              if ((uVar20 >> 0x10 & 1) != 0) {
                pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xfffeffff);
                FUN_144bdc690(local_600);
              }
            }
            if (*(char *)*param_1 != '\0') {
              *param_2 = local_748[0];
              lVar19 = lVar9 + (longlong)iVar7 * 8;
              while (lVar19 != lVar9) {
                lVar19 = lVar19 + -8;
                FUN_144b49dd0(lVar19);
              }
LAB_144f8f441:
              if ((-1 < (int)uVar26) && (lVar9 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,lVar9,(ulonglong)(uVar26 & 0x7fffffff) << 3);
              }
              local_450 = 0;
              if ((int)local_44c < 0) {
                return param_2;
              }
              if (local_458 == (undefined1 *)0x0) {
                return param_2;
              }
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_458,(ulonglong)(local_44c & 0x7fffffff) << 3);
              return param_2;
            }
          }
          else if (((ulonglong)*local_6f0 & 1) == 0) {
            piVar12 = (int *)FUN_144f8bda0(param_1,local_690);
            if (*piVar12 < 0) {
              FUN_144f8aee0(local_748);
              lVar19 = *(longlong *)(*param_1 + 0x28);
              if ((lVar19 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar19 + 0x50) ||
                  (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
                cVar6 = FUN_144bdbf80();
                if (cVar6 == '\0') {
                  uVar20 = uVar20 | 0x100000;
                  uVar10 = FUN_144bdc640(local_600);
                }
                else {
                  uVar20 = uVar20 | 0x200000;
                  uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                         *(undefined1 *)(*param_1 + 0x30));
                }
                pcStack_718 = FUN_144bf0db0;
                pcStack_738 = FUN_144bf0db0;
                local_730 = &local_698;
                local_740 = (code *)0x3;
                pcStack_728 = FUN_144f50c70;
                local_720 = &local_6a0;
                local_710 = (uint *******)&local_res18;
                local_6e8 = (uint ******)0x3;
                pcStack_6e0 = FUN_144bf0db0;
                pcStack_6d0 = FUN_144f50c70;
                pcStack_6c0 = FUN_144bf0db0;
                local_6d8 = local_730;
                local_6c8 = local_720;
                local_6b8 = local_710;
                lVar19 = FUN_144bdc480(uVar10,
                                       "Field decorator type \'{}\' of decl \'{}\' of type \'{}\' failed inner checks."
                                       ,&local_6e8,0);
                *(undefined8 *)(lVar19 + 0x40) = 0x2b2;
                *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                if ((uVar20 >> 0x15 & 1) != 0) {
                  uVar20 = uVar20 & 0xffdfffff;
                  FUN_144bdc8a0(local_5a8);
                }
                pppppppuVar22 = (uint *******)(ulonglong)uVar20;
                if ((uVar20 >> 0x14 & 1) != 0) {
                  pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xffefffff);
                  FUN_144bdc690(local_600);
                }
              }
              if (*(char *)*param_1 != '\0') {
                *param_2 = local_748[0];
                lVar19 = lVar9 + (longlong)iVar7 * 8;
                while (lVar19 != lVar9) {
                  lVar19 = lVar19 + -8;
                  FUN_144b49dd0(lVar19);
                }
                goto LAB_144f8f441;
              }
            }
            else {
              lVar19 = *param_1;
              if (local_698[1] == (uint *****)0x0) {
                FUN_144f8aee0(local_748);
                if ((*(longlong *)(lVar19 + 0x28) != 0) &&
                   ((*(byte *)(lVar19 + 0x30) <= *(byte *)(*(longlong *)(lVar19 + 0x28) + 0x50) ||
                    (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
                  cVar6 = FUN_144bdbf80();
                  if (cVar6 == '\0') {
                    uVar20 = uVar20 | 0x400000;
                    uVar10 = FUN_144bdc640(local_600);
                  }
                  else {
                    uVar20 = uVar20 | 0x800000;
                    uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                           *(undefined1 *)(*param_1 + 0x30));
                  }
                  local_6e8 = (uint ******)0x1;
                  pcStack_6e0 = FUN_144f82010;
                  local_730 = &local_6f0;
                  local_740 = (code *)0x1;
                  pcStack_738 = FUN_144f82010;
                  local_6d8 = local_730;
                  lVar19 = FUN_144bdc480(uVar10,"Field \'{}\' has null type.",&local_740,0);
                  *(undefined8 *)(lVar19 + 0x40) = 0x2b3;
                  *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                  if ((uVar20 >> 0x17 & 1) != 0) {
                    uVar20 = uVar20 & 0xff7fffff;
                    FUN_144bdc8a0(local_5a8);
                  }
                  pppppppuVar22 = (uint *******)(ulonglong)uVar20;
                  if ((uVar20 >> 0x16 & 1) != 0) {
                    pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xffbfffff);
                    FUN_144bdc690(local_600);
                  }
                }
                if (*(char *)*param_1 != '\0') {
                  *param_2 = local_748[0];
                  lVar19 = lVar9 + (longlong)iVar7 * 8;
                  while (lVar19 != lVar9) {
                    lVar19 = lVar19 + -8;
                    FUN_144b49dd0(lVar19);
                  }
                  goto LAB_144f8f441;
                }
              }
              else if ((*(code **)(lVar19 + 0x10) == (code *)0x0) ||
                      (cVar6 = (**(code **)(lVar19 + 0x10))
                                         (local_698[1],*(undefined8 *)(lVar19 + 0x18)),
                      cVar6 != '\0')) {
                ppppppuVar3 = local_698;
                puVar17 = (uint *)FUN_144bef800(local_698,local_5b0);
                ppppppuVar18 = (uint ******)0x0;
                if ((*puVar17 & 0x1f) == 0) {
                  ppppppuVar18 = ppppppuVar3;
                }
                if (ppppppuVar18 != (uint ******)0x0) {
                  FUN_144f8aee0(local_748);
                  lVar19 = *(longlong *)(*param_1 + 0x28);
                  if ((lVar19 != 0) &&
                     ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar19 + 0x50) ||
                      (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
                    cVar6 = FUN_144bdbf80();
                    if (cVar6 == '\0') {
                      uVar20 = uVar20 | 0x4000000;
                      uVar10 = FUN_144bdc640(local_600);
                    }
                    else {
                      uVar20 = uVar20 | 0x8000000;
                      uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                             *(undefined1 *)(*param_1 + 0x30));
                    }
                    local_740 = (code *)0x2;
                    pcStack_738 = FUN_144bf0db0;
                    local_730 = (uint *******)&local_res18;
                    pcStack_728 = FUN_144f50c70;
                    local_720 = &local_6a0;
                    local_6e8 = (uint ******)0x2;
                    pcStack_6e0 = FUN_144bf0db0;
                    pcStack_6d0 = FUN_144f50c70;
                    local_6d8 = local_730;
                    local_6c8 = local_720;
                    lVar19 = FUN_144bdc480(uVar10,"Type \'{}\' has field \'{}\' with VOID type.",
                                           &local_6e8,0);
                    *(undefined8 *)(lVar19 + 0x40) = 0x2b9;
                    *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                    if ((uVar20 >> 0x1b & 1) != 0) {
                      uVar20 = uVar20 & 0xf7ffffff;
                      FUN_144bdc8a0(local_5a8);
                    }
                    pppppppuVar22 = (uint *******)(ulonglong)uVar20;
                    if ((uVar20 >> 0x1a & 1) != 0) {
                      pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xfbffffff);
                      FUN_144bdc690(local_600);
                    }
                  }
                  if (*(char *)*param_1 != '\0') {
                    *param_2 = local_748[0];
                    lVar19 = lVar9 + (longlong)iVar7 * 8;
                    while (lVar19 != lVar9) {
                      lVar19 = lVar19 + -8;
                      FUN_144b49dd0(lVar19);
                    }
                    goto LAB_144f8f441;
                  }
                }
                puVar17 = (uint *)FUN_144b45d50(local_698,local_608);
                if ((~(byte)(*puVar17 >> 1) & 1) == 0) {
                  FUN_144f8aee0(local_748);
                  lVar19 = *(longlong *)(*param_1 + 0x28);
                  if ((lVar19 != 0) &&
                     ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar19 + 0x50) ||
                      (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
                    cVar6 = FUN_144bdbf80();
                    if (cVar6 == '\0') {
                      uVar20 = (uint)pppppppuVar22 | 0x10000000;
                      uVar10 = FUN_144bdc640(local_600);
                    }
                    else {
                      uVar20 = (uint)pppppppuVar22 | 0x20000000;
                      uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                             *(undefined1 *)(*param_1 + 0x30));
                    }
                    pcStack_718 = FUN_144bf0db0;
                    pcStack_738 = FUN_144bf0db0;
                    local_730 = (uint *******)&local_res18;
                    local_740 = (code *)0x3;
                    pcStack_728 = FUN_144f50c70;
                    local_720 = &local_6a0;
                    local_710 = &local_698;
                    local_6e8 = (uint ******)0x3;
                    pcStack_6e0 = FUN_144bf0db0;
                    pcStack_6d0 = FUN_144f50c70;
                    pcStack_6c0 = FUN_144bf0db0;
                    local_6d8 = local_730;
                    local_6c8 = local_720;
                    local_6b8 = local_710;
                    lVar19 = FUN_144bdc480(uVar10,
                                           "Type \'{}\' has field \'{}\' with abstract type ({}).",
                                           &local_6e8,0);
                    *(undefined8 *)(lVar19 + 0x40) = 0x2ba;
                    *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                    if (uVar20 >> 0x1d != 0) {
                      uVar20 = uVar20 & 0xdfffffff;
                      FUN_144bdc8a0(local_5a8);
                    }
                    pppppppuVar22 = (uint *******)(ulonglong)uVar20;
                    if ((uVar20 >> 0x1c & 1) != 0) {
                      pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xefffffff);
                      FUN_144bdc690(local_600);
                    }
                  }
                  if (*(char *)*param_1 != '\0') {
                    *param_2 = local_748[0];
                    lVar19 = lVar9 + (longlong)iVar7 * 8;
                    while (lVar19 != lVar9) {
                      lVar19 = lVar19 + -8;
                      FUN_144b49dd0(lVar19);
                    }
                    goto LAB_144f8f441;
                  }
                }
              }
              else {
                FUN_144f8aee0(local_748);
                lVar19 = *(longlong *)(*param_1 + 0x28);
                if ((lVar19 != 0) &&
                   ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar19 + 0x50) ||
                    (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
                  cVar6 = FUN_144bdbf80();
                  if (cVar6 == '\0') {
                    uVar20 = uVar20 | 0x1000000;
                    uVar10 = FUN_144bdc640(local_600);
                  }
                  else {
                    uVar20 = uVar20 | 0x2000000;
                    uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                           *(undefined1 *)(*param_1 + 0x30));
                  }
                  local_6e8 = (uint ******)0x1;
                  pcStack_6e0 = FUN_144f82010;
                  local_730 = &local_6f0;
                  local_740 = (code *)0x1;
                  pcStack_738 = FUN_144f82010;
                  local_6d8 = local_730;
                  lVar19 = FUN_144bdc480(uVar10,"Type of field \'{}\' is not reachable.",&local_740,
                                         0);
                  *(undefined8 *)(lVar19 + 0x40) = 0x2b6;
                  *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                  if ((uVar20 >> 0x19 & 1) != 0) {
                    uVar20 = uVar20 & 0xfdffffff;
                    FUN_144bdc8a0(local_5a8);
                  }
                  pppppppuVar22 = (uint *******)(ulonglong)uVar20;
                  if ((uVar20 >> 0x18 & 1) != 0) {
                    pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xfeffffff);
                    FUN_144bdc690(local_600);
                  }
                }
                if (*(char *)*param_1 != '\0') {
                  *param_2 = local_748[0];
                  lVar19 = lVar9 + (longlong)iVar7 * 8;
                  while (lVar19 != lVar9) {
                    lVar19 = lVar19 + -8;
                    FUN_144b49dd0(lVar19);
                  }
                  goto LAB_144f8f441;
                }
              }
            }
          }
          else {
            FUN_144f8aee0(local_748);
            lVar19 = *(longlong *)(*param_1 + 0x28);
            if ((lVar19 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar19 + 0x50) ||
                (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 == '\0') {
                uVar20 = uVar20 | 0x40000;
                uVar10 = FUN_144bdc640(local_600);
              }
              else {
                uVar20 = uVar20 | 0x80000;
                uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
              }
              local_740 = (code *)0x2;
              pcStack_738 = FUN_144f50c70;
              local_730 = &local_6a0;
              pcStack_728 = FUN_144bf0db0;
              local_720 = (uint *******)&local_res18;
              local_6e8 = (uint ******)0x2;
              pcStack_6e0 = FUN_144f50c70;
              pcStack_6d0 = FUN_144bf0db0;
              local_6d8 = local_730;
              local_6c8 = local_720;
              lVar19 = FUN_144bdc480(uVar10,"Field \'{}\' of type \'{}\' has non-decorator type.",
                                     &local_6e8,0);
              *(undefined8 *)(lVar19 + 0x40) = 0x2b1;
              *(char **)(lVar19 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((uVar20 >> 0x13 & 1) != 0) {
                uVar20 = uVar20 & 0xfff7ffff;
                FUN_144bdc8a0(local_5a8);
              }
              pppppppuVar22 = (uint *******)(ulonglong)uVar20;
              if ((uVar20 >> 0x12 & 1) != 0) {
                pppppppuVar22 = (uint *******)(ulonglong)(uVar20 & 0xfffbffff);
                FUN_144bdc690(local_600);
              }
            }
            if (*(char *)*param_1 != '\0') {
              *param_2 = local_748[0];
              lVar19 = lVar9 + (longlong)iVar7 * 8;
              while (lVar19 != lVar9) {
                lVar19 = lVar19 + -8;
                FUN_144b49dd0(lVar19);
              }
              goto LAB_144f8f441;
            }
          }
          uVar20 = (uint)pppppppuVar22;
          local_670 = local_670 + 1;
          iVar8 = iVar7;
        } while (local_670 != local_688);
      }
      lVar19 = lVar9 + (longlong)iVar7 * 8;
      while (lVar19 != lVar9) {
        lVar19 = lVar19 + -8;
        FUN_144b49dd0(lVar19);
      }
      if ((-1 < (int)uVar26) && (lVar9 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar9,(ulonglong)(uVar26 & 0x7fffffff) << 3);
      }
      local_450 = 0;
      if ((-1 < (int)local_44c) && (local_458 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_458,(ulonglong)(local_44c & 0x7fffffff) << 3);
      }
    }
    pppppppuVar22 = local_res18;
    pppppppuVar21 = (uint *******)0x0;
    puVar11 = (undefined4 *)FUN_144bef800(local_res18,&local_res20);
    pppppppuVar24 = pppppppuVar21;
    if (((byte)*puVar11 & 0x1f) == 6) {
      pppppppuVar24 = pppppppuVar22;
    }
    if (((pppppppuVar24 == (uint *******)0x0) ||
        (piVar12 = (int *)FUN_144f8f790(param_1,&local_res20), -1 < *piVar12)) ||
       (FUN_144f8aee0(local_748), *(char *)*param_1 == '\0')) {
      pppppppuVar22 = local_res18;
      puVar11 = (undefined4 *)FUN_144bef800(local_res18,&local_res20);
      pppppppuVar24 = pppppppuVar21;
      if (((byte)*puVar11 & 0x1f) == 8) {
        pppppppuVar24 = pppppppuVar22;
      }
      if (((pppppppuVar24 == (uint *******)0x0) ||
          (piVar12 = (int *)FUN_144f8fc20(param_1,&local_res20), -1 < *piVar12)) ||
         (FUN_144f8aee0(local_748), *(char *)*param_1 == '\0')) {
        pppppppuVar22 = local_res18;
        puVar11 = (undefined4 *)FUN_144bef800(local_res18,&local_res20);
        pppppppuVar24 = pppppppuVar21;
        if (((byte)*puVar11 & 0x1f) == 7) {
          pppppppuVar24 = pppppppuVar22;
        }
        if ((pppppppuVar24 != (uint *******)0x0) &&
           (pppppppuVar24 = (uint *******)pppppppuVar24[1], local_688 = pppppppuVar24,
           pppppppuVar24 != (uint *******)0x0)) {
          puVar11 = (undefined4 *)FUN_144bef800(pppppppuVar24,local_608);
          if (((byte)*puVar11 & 0x1f) == 7) {
            pppppppuVar21 = pppppppuVar24;
          }
          if (pppppppuVar21 == (uint *******)0x0) {
            lVar9 = *(longlong *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 == '\0') {
                uVar20 = uVar20 | 0x40000000;
                uVar10 = FUN_144bdc640(local_600);
                pppppppuVar25 = &local_6e8;
                local_6c8 = (uint *******)&local_688;
                local_6e8 = (uint ******)0x2;
                pcStack_6e0 = FUN_144f92e90;
                local_6d8 = pppppppuVar22;
                pcStack_6d0 = FUN_144bf0db0;
              }
              else {
                uVar20 = uVar20 | 0x80000000;
                uVar10 = FUN_144bdc810(local_5a8,*(undefined8 *)(*param_1 + 0x28),
                                       *(undefined1 *)(*param_1 + 0x30));
                local_648 = (uint *******)&local_688;
                local_668 = (uint *******)0x2;
                pppppppuStack_660 = (uint *******)FUN_144f92e90;
                local_658 = pppppppuVar22;
                uStack_650 = 0x44bf0db0;
                uStack_64c = 1;
              }
              local_720 = (uint *******)&local_688;
              pcStack_728 = FUN_144bf0db0;
              local_730 = pppppppuVar22;
              pcStack_738 = FUN_144f92e90;
              local_740 = (code *)0x2;
              lVar9 = FUN_144bdc480(uVar10,
                                    "Registered record type \'{}\' has as parent type \'{}\', which is a non-record type."
                                    ,pppppppuVar25,0);
              *(undefined8 *)(lVar9 + 0x40) = 0x346;
              *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined4 *)(lVar9 + 0x1c) = 0;
              if ((int)uVar20 < 0) {
                FUN_144bdc8a0(local_5a8);
              }
              if ((uVar20 >> 0x1e & 1) != 0) {
                FUN_144bdc690(local_600);
              }
            }
            local_res20 = local_res20 & 0xffffffff00000000;
            FUN_144f8aee0(&local_res20);
            if (((int)local_res20 < 0) && (FUN_144f8aee0(local_748), *(char *)*param_1 != '\0'))
            goto LAB_144f8f74b;
          }
        }
        piVar12 = (int *)FUN_144f907b0(param_1,&local_res20,local_res18);
        if (*piVar12 < 0) {
          FUN_144f8aee0(local_748);
        }
      }
    }
  }
LAB_144f8f74b:
  *param_2 = local_748[0];
  return param_2;
}



// FUNCTION 144f8f790 FUN_144f8f790 body=1167 status=ok
// SIG undefined FUN_144f8f790(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_144f8f790(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *local_res20;
  undefined *local_228;
  longlong local_220 [2];
  code *local_210;
  undefined8 local_208;
  code *local_200;
  undefined **local_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  code *local_1d8;
  undefined **local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  FUN_144beff00(param_3,&local_228);
  local_res20 = local_228;
  if (local_228 != (undefined *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x10);
    if ((pcVar1 != (code *)0x0) &&
       (cVar2 = (*pcVar1)(local_228,*(undefined8 *)(*param_1 + 0x18)), cVar2 == '\0')) {
      lVar4 = *(longlong *)(*param_1 + 0x28);
      if ((lVar4 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar4 + 0x50) ||
          (cVar2 = FUN_144bdbf80(), cVar2 != '\0')))) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          uVar3 = FUN_144bdc640(local_1c8);
          local_220[1] = 1;
          local_210 = FUN_144f92fa0;
          local_208 = param_3;
          lVar4 = FUN_144bdc480(uVar3,"Pointer type \'{}\' has unreachable pointee type.",
                                local_220 + 1,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x2f2;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          FUN_144bdc690(local_1c8);
        }
        else {
          uVar3 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_1f0 = 1;
          local_1e8 = FUN_144f92fa0;
          local_1e0 = param_3;
          lVar4 = FUN_144bdc480(uVar3,"Pointer type \'{}\' has unreachable pointee type.",&local_1f0
                                ,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x2f2;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          FUN_144bdc8a0(local_178);
        }
      }
      local_res20 = (undefined *)((ulonglong)local_res20 & 0xffffffff00000000);
      FUN_144f8aee0(&local_res20);
      *param_2 = local_res20._0_4_;
      return param_2;
    }
  }
  puVar5 = (undefined *)FUN_144befdb0(param_3);
  if (puVar5 != &DAT_14c7847d8) {
LAB_144f8faca:
    *param_2 = 0;
    return param_2;
  }
  if (local_res20 == (undefined *)0x0) {
    lVar4 = *(longlong *)(*param_1 + 0x28);
    if ((lVar4 == 0) ||
       ((*(byte *)(lVar4 + 0x50) < *(byte *)(*param_1 + 0x30) &&
        (cVar2 = FUN_144bdbf80(), cVar2 == '\0')))) goto LAB_144f8fa2d;
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_1c8);
      local_1f0 = 1;
      local_1e8 = FUN_144f92fa0;
      local_1e0 = param_3;
      lVar4 = FUN_144bdc480(uVar3,"Referenced pointer type \'{}\' has no subtype",&local_1f0,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x2fa;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      FUN_144bdc690(local_1c8);
      goto LAB_144f8fa2d;
    }
    uVar3 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                          *(undefined1 *)(*param_1 + 0x30));
    local_220[1] = 1;
    local_210 = FUN_144f92fa0;
    local_208 = param_3;
    lVar4 = FUN_144bdc480(uVar3,"Referenced pointer type \'{}\' has no subtype",local_220 + 1,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x2fa;
  }
  else {
    cVar2 = FUN_144bef570(local_res20,&DAT_14c6ddac0);
    if ((cVar2 != '\0') ||
       (cVar2 = FUN_144bef570(local_res20,&DAT_14c6da958), puVar5 = local_res20, cVar2 != '\0'))
    goto LAB_144f8faca;
    local_220[0] = FUN_144befe50(local_res20,0x2000);
    if (local_220[0] == 0) {
      local_220[0] = 0;
joined_r0x000144f8fafe:
      for (; puVar5 != (undefined *)0x0; puVar5 = *(undefined **)(puVar5 + 8)) {
        if (puVar5 == &DAT_14c6dc390) goto LAB_144f8faca;
      }
    }
    else {
      local_228 = (undefined *)FUN_144befe50(&DAT_14c6dc390,0x2000);
      if (local_228 == (undefined *)0x0) {
        local_228 = (undefined *)0x0;
        goto joined_r0x000144f8fafe;
      }
      if (local_220[0] == 0) goto joined_r0x000144f8fafe;
      cVar2 = FUN_144f69000(local_220,&local_228);
      if (cVar2 != '\0') goto LAB_144f8faca;
    }
    lVar4 = *(longlong *)(*param_1 + 0x28);
    if ((lVar4 == 0) ||
       ((*(byte *)(lVar4 + 0x50) < *(byte *)(*param_1 + 0x30) &&
        (cVar2 = FUN_144bdbf80(), cVar2 == '\0')))) goto LAB_144f8fa2d;
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_1c8);
      local_1f0 = 2;
      local_1e8 = FUN_144f92fa0;
      local_1d8 = FUN_144bf0db0;
      local_1d0 = &local_res20;
      local_1e0 = param_3;
      lVar4 = FUN_144bdc480(uVar3,
                            "Referenced pointer type \'{}\' points to non-referenced type \'{}\'",
                            &local_1f0,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x2fd;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      FUN_144bdc690(local_1c8);
      goto LAB_144f8fa2d;
    }
    uVar3 = FUN_144bdc810(local_178,*(undefined8 *)(*param_1 + 0x28),
                          *(undefined1 *)(*param_1 + 0x30));
    local_220[1] = 2;
    local_210 = FUN_144f92fa0;
    local_200 = FUN_144bf0db0;
    local_1f8 = &local_res20;
    local_208 = param_3;
    lVar4 = FUN_144bdc480(uVar3,
                          "Referenced pointer type \'{}\' points to non-referenced type \'{}\'",
                          local_220 + 1,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x2fd;
  }
  *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
  *(undefined4 *)(lVar4 + 0x1c) = 0;
  FUN_144bdc8a0(local_178);
LAB_144f8fa2d:
  local_res20 = (undefined *)((ulonglong)local_res20 & 0xffffffff00000000);
  FUN_144f8aee0(&local_res20);
  *param_2 = local_res20._0_4_;
  return param_2;
}



// FUNCTION 144f8fc20 FUN_144f8fc20 body=1251 status=ok
// SIG undefined FUN_144f8fc20(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_144f8fc20(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res20 [2];
  longlong local_268 [2];
  code *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  code *local_230;
  undefined8 local_228;
  code *local_220;
  undefined4 *local_218;
  code *local_210;
  undefined4 *local_208;
  code *local_200;
  longlong *local_1f8;
  code *local_1f0;
  undefined4 *local_1e8;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  lVar13 = 0;
  local_res10 = 0;
  *param_2 = 0;
  FUN_144beff00(param_3,&local_res10);
  lVar10 = CONCAT44(uStackX_14,local_res10);
  local_268[0] = lVar10;
  if (lVar10 == 0) {
    plVar11 = (longlong *)FUN_144befe50(param_3,1);
    if (plVar11 != (longlong *)0x0) {
      lVar13 = *plVar11;
    }
    if ((int)((ulonglong)lVar13 >> 8) != 0) {
      FUN_144f8aee0(param_2);
      lVar13 = *(longlong *)(*param_1 + 0x28);
      if ((lVar13 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar13 + 0x50) ||
          (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar9 = FUN_144bdc640(local_1e0);
          local_268[1] = 1;
          local_258 = FUN_144f93010;
          local_250 = param_3;
          lVar13 = FUN_144bdc480(uVar9,"Fixed array type {} must have a subtype",local_268 + 1,0);
          *(char **)(lVar13 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar13 + 0x40) = 0x31a;
          FUN_144bdc690(local_1e0);
        }
        else {
          uVar9 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_268[1] = 1;
          local_258 = FUN_144f93010;
          local_250 = param_3;
          lVar13 = FUN_144bdc480(uVar9,"Fixed array type {} must have a subtype",local_268 + 1,0);
          *(char **)(lVar13 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar13 + 0x40) = 0x31a;
          FUN_144bdc8a0(local_190);
        }
      }
    }
  }
  else {
    puVar7 = (undefined4 *)FUN_144bef800(lVar10,&local_res10);
    lVar8 = lVar13;
    if (((byte)*puVar7 & 0x1f) == 1) {
      lVar8 = lVar10;
    }
    if (lVar8 == 0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      if ((pcVar1 != (code *)0x0) &&
         (cVar4 = (*pcVar1)(local_268[0],*(undefined8 *)(*param_1 + 0x18)), cVar4 == '\0')) {
        FUN_144f8aee0(param_2);
        lVar10 = *(longlong *)(*param_1 + 0x28);
        if ((lVar10 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar10 + 0x50) ||
            (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            uVar9 = FUN_144bdc640(local_1e0);
            local_268[1] = 1;
            local_258 = FUN_144f93010;
            local_250 = param_3;
            lVar10 = FUN_144bdc480(uVar9,"Array type \'{}\' has unreachable element type.",
                                   local_268 + 1,0);
            *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            *(undefined8 *)(lVar10 + 0x40) = 0x30e;
            FUN_144bdc690(local_1e0);
          }
          else {
            uVar9 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                  *(undefined1 *)(*param_1 + 0x30));
            local_268[1] = 1;
            local_258 = FUN_144f93010;
            local_250 = param_3;
            lVar10 = FUN_144bdc480(uVar9,"Array type \'{}\' has unreachable element type.",
                                   local_268 + 1,0);
            *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            *(undefined8 *)(lVar10 + 0x40) = 0x30e;
            FUN_144bdc8a0(local_190);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return param_2;
        }
      }
      plVar11 = (longlong *)FUN_144befe50(param_3,1);
      lVar10 = lVar13;
      if (plVar11 != (longlong *)0x0) {
        lVar10 = *plVar11;
      }
      if (0 < (int)((ulonglong)lVar10 >> 8)) {
        plVar11 = (longlong *)FUN_144befe50(param_3,1);
        if (plVar11 != (longlong *)0x0) {
          lVar13 = *plVar11;
        }
        iVar5 = FUN_144beec90(local_268[0]);
        iVar6 = FUN_144beec90(param_3);
        if (iVar6 != iVar5 * (int)((ulonglong)lVar13 >> 8)) {
          FUN_144f8aee0(param_2);
          lVar13 = *(longlong *)(*param_1 + 0x28);
          if ((lVar13 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar13 + 0x50) ||
              (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
            cVar4 = FUN_144bdbf80();
            if (cVar4 == '\0') {
              local_248 = FUN_144beec90(local_268[0]);
              puVar12 = (undefined8 *)FUN_144befe50(param_3,1);
              if (puVar12 == (undefined8 *)0x0) {
                local_res20[0] = 0;
              }
              else {
                local_res20[0] = (undefined4)((ulonglong)*puVar12 >> 8);
              }
              local_res10 = FUN_144beec90(param_3);
              bVar3 = true;
              bVar2 = false;
              uVar9 = FUN_144bdc640(local_1e0,*(undefined8 *)(*param_1 + 0x28),
                                    *(undefined1 *)(*param_1 + 0x30));
              local_218 = &local_res10;
              local_208 = local_res20;
              local_1e8 = &local_248;
            }
            else {
              local_23c = FUN_144beec90(local_268[0]);
              puVar12 = (undefined8 *)FUN_144befe50(param_3,1);
              if (puVar12 == (undefined8 *)0x0) {
                local_240 = 0;
              }
              else {
                local_240 = (undefined4)((ulonglong)*puVar12 >> 8);
              }
              local_244 = FUN_144beec90(param_3);
              bVar3 = false;
              bVar2 = true;
              uVar9 = FUN_144bdc810(local_190,*(undefined8 *)(*param_1 + 0x28),
                                    *(undefined1 *)(*param_1 + 0x30));
              local_218 = &local_244;
              local_208 = &local_240;
              local_1e8 = &local_23c;
            }
            local_1f0 = FUN_144f50970;
            local_210 = FUN_144f50970;
            local_220 = FUN_144f50970;
            local_200 = FUN_144bf0db0;
            local_1f8 = local_268;
            local_238 = 5;
            local_230 = FUN_144f93010;
            local_228 = param_3;
            lVar13 = FUN_144bdc480(uVar9,
                                   "Fixed size array type \'{}\' ({} bytes) contains {} \'{}\' ({} bytes each), sizes mismatch."
                                   ,&local_238,0);
            *(undefined8 *)(lVar13 + 0x40) = 0x314;
            *(char **)(lVar13 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            if (bVar2) {
              FUN_144bdc8a0(local_190);
            }
            if (bVar3) {
              FUN_144bdc690(local_1e0);
            }
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 144f90110 FUN_144f90110 body=1689 status=ok
// SIG undefined FUN_144f90110(void)

undefined4 * FUN_144f90110(longlong *param_1,undefined4 *param_2,byte *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 local_res18 [2];
  byte *local_res20;
  ulonglong *local_2c8;
  ulonglong *local_2c0;
  undefined8 local_2b8;
  code *local_2b0;
  byte *local_2a8;
  code *local_2a0;
  byte **local_298;
  code *local_290;
  uint *local_288;
  code *local_280;
  byte **local_278;
  code *local_270;
  ulonglong *local_268;
  code *local_260;
  uint *local_258;
  undefined4 local_250;
  uint local_24c;
  uint local_248;
  undefined4 local_244;
  uint local_240;
  uint local_23c;
  undefined4 local_238;
  uint local_234;
  uint local_230;
  undefined4 local_22c;
  uint local_228;
  uint local_224;
  undefined4 local_220;
  uint local_21c;
  uint local_218;
  undefined4 local_214;
  uint local_210;
  uint local_20c;
  ulonglong local_208;
  undefined8 local_200;
  byte *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  byte *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  bVar6 = 0;
  local_res18[0] = 0;
  local_res20 = (byte *)FUN_144f699a0(param_3);
  if (local_res20 != param_3) {
    pcVar1 = *(code **)(*param_1 + 0x10);
    if ((pcVar1 != (code *)0x0) &&
       (cVar3 = (*pcVar1)(local_res20,*(undefined8 *)(*param_1 + 0x18)), cVar3 == '\0')) {
      lVar5 = *(longlong *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (cVar3 = FUN_144bdbf80(), cVar3 != '\0')))) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 == '\0') {
          uVar4 = FUN_144bdc640(&local_2b8);
          local_1f0 = 1;
          local_1e8 = FUN_144f92e90;
          local_1e0 = param_3;
          lVar5 = FUN_144bdc480(uVar4,
                                "Type \'{}\' resolved to an unreachable type after resolving typedefs."
                                ,&local_1f0,0);
          *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x32e;
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          FUN_144bdc690(&local_2b8);
          local_res18[0] = 0;
          FUN_144f8aee0(local_res18);
          goto LAB_144f90781;
        }
        uVar4 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_208 = 1;
        local_200 = FUN_144f92e90;
        local_1f8 = param_3;
        lVar5 = FUN_144bdc480(uVar4,
                              "Type \'{}\' resolved to an unreachable type after resolving typedefs."
                              ,&local_208,0);
        *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x32e;
        *(undefined4 *)(lVar5 + 0x1c) = 0;
        FUN_144bdc8a0(local_188);
      }
      local_res18[0] = 0;
      FUN_144f8aee0(local_res18);
      goto LAB_144f90781;
    }
  }
  if ((~*local_res20 & 1) != 0) {
    FUN_144f8aee0(local_res18);
    lVar5 = *(longlong *)(*param_1 + 0x28);
    if ((lVar5 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
        (cVar3 = FUN_144bdbf80(), cVar3 != '\0')))) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar4 = FUN_144bdc640(local_1d8);
        local_2b8 = 2;
        local_2a0 = FUN_144bf0db0;
        local_298 = &local_res20;
        local_2b0 = FUN_144f92e90;
        local_2a8 = param_3;
        lVar5 = FUN_144bdc480(uVar4,
                              "Type \'{}\' resolved to type \'{}\' which is a decorator, so not canonical."
                              ,&local_2b8,0);
        *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x32f;
        FUN_144bdc690(local_1d8);
      }
      else {
        uVar4 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                              *(undefined1 *)(*param_1 + 0x30));
        local_2b8 = 2;
        local_2a0 = FUN_144bf0db0;
        local_298 = &local_res20;
        local_2b0 = FUN_144f92e90;
        local_2a8 = param_3;
        lVar5 = FUN_144bdc480(uVar4,
                              "Type \'{}\' resolved to type \'{}\' which is a decorator, so not canonical."
                              ,&local_2b8,0);
        *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x32f;
        FUN_144bdc8a0(local_188);
      }
    }
    if (*(char *)*param_1 != '\0') goto LAB_144f90781;
  }
  local_2c8 = (ulonglong *)FUN_144befe50(param_3,0x2000);
  if (local_2c8 != (ulonglong *)0x0) {
    if (*local_2c8 == 0) {
      FUN_144f8aee0(local_res18);
      lVar5 = *(longlong *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (cVar3 = FUN_144bdbf80(), cVar3 != '\0')))) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 == '\0') {
          bVar6 = 0x10;
          uVar4 = FUN_144bdc640(local_1d8);
        }
        else {
          bVar6 = 0x20;
          uVar4 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
        }
        local_2b8 = 1;
        local_2b0 = FUN_144f92e90;
        local_2a8 = param_3;
        lVar5 = FUN_144bdc480(uVar4,"Type \'{}\' has empty Opt::INHERITANCE.",&local_2b8,0);
        *(undefined8 *)(lVar5 + 0x40) = 0x334;
        *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((bVar6 & 0x20) != 0) {
          bVar6 = bVar6 & 0xdf;
          FUN_144bdc8a0(local_188);
        }
        if ((bVar6 & 0x10) != 0) {
          bVar6 = bVar6 & 0xef;
          FUN_144bdc690(local_1d8);
        }
      }
      if (*(char *)*param_1 != '\0') goto LAB_144f90781;
    }
    local_2c0 = (ulonglong *)FUN_144befe50(local_res20,0x2000);
    cVar3 = FUN_144f68f40(&local_2c8,&local_2c0);
    if (cVar3 == '\0') {
      FUN_144f8aee0(local_res18);
      lVar5 = *(longlong *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (cVar3 = FUN_144bdbf80(), cVar3 != '\0')))) {
        cVar3 = FUN_144bdbf80();
        uVar2 = *local_2c0;
        if (cVar3 == '\0') {
          bVar6 = bVar6 | 0x40;
          local_22c = (undefined4)(uVar2 >> 0x11);
          local_224 = (uint)uVar2 & 3;
          local_228 = (uint)(uVar2 >> 2) & 0x7fff;
          uVar2 = *local_2c0;
          local_238 = (undefined4)(uVar2 >> 0x11);
          local_230 = (uint)uVar2 & 3;
          local_234 = (uint)(uVar2 >> 2) & 0x7fff;
          uVar2 = *local_2c8;
          local_250 = (undefined4)(uVar2 >> 0x11);
          local_248 = (uint)uVar2 & 3;
          local_24c = (uint)(uVar2 >> 2) & 0x7fff;
          uVar2 = *local_2c8;
          local_244 = (undefined4)(uVar2 >> 0x11);
          local_23c = (uint)uVar2 & 3;
          local_240 = (uint)(uVar2 >> 2) & 0x7fff;
          uVar4 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_298 = (byte **)&local_250;
          local_288 = &local_240;
          local_268 = (ulonglong *)&local_238;
          local_258 = &local_228;
        }
        else {
          bVar6 = bVar6 | 0x80;
          local_1e8 = (code *)(CONCAT44(local_1e8._4_4_,(uint)uVar2) & 0xffffffff00000003);
          local_1f0 = CONCAT44((int)(uVar2 >> 2),(int)(uVar2 >> 0x11)) & 0x7fffffffffff;
          uVar2 = *local_2c8;
          local_214 = (undefined4)(uVar2 >> 0x11);
          local_20c = (uint)uVar2 & 3;
          local_210 = (uint)(uVar2 >> 2) & 0x7fff;
          uVar2 = *local_2c8;
          local_220 = (undefined4)(uVar2 >> 0x11);
          local_218 = (uint)uVar2 & 3;
          local_21c = (uint)(uVar2 >> 2) & 0x7fff;
          uVar2 = *local_2c0;
          local_200 = (code *)(CONCAT44(local_200._4_4_,(int)uVar2) & 0xffffffff00000003);
          local_208 = CONCAT44((int)(uVar2 >> 2),(int)(uVar2 >> 0x11)) & 0x7fffffffffff;
          uVar4 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_298 = (byte **)&local_220;
          local_288 = &local_210;
          local_268 = &local_208;
          local_258 = (uint *)((longlong)&local_1f0 + 4);
        }
        local_278 = &local_res20;
        local_260 = FUN_144f50970;
        local_270 = FUN_144f50970;
        local_280 = FUN_144bf0db0;
        local_290 = FUN_144f50970;
        local_2a0 = FUN_144f50970;
        local_2b8 = 6;
        local_2b0 = FUN_144f92e90;
        local_2a8 = param_3;
        lVar5 = FUN_144bdc480(uVar4,
                              "Type \'{}\' has inheritance {}/{} but the corresponding resolved type \'{}\' has a different inheritance {}/{}."
                              ,&local_2b8,0);
        *(undefined8 *)(lVar5 + 0x40) = 0x338;
        *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        if ((char)bVar6 < '\0') {
          FUN_144bdc8a0(local_188);
        }
        if ((bVar6 & 0x40) != 0) {
          FUN_144bdc690(local_1d8);
        }
      }
    }
  }
LAB_144f90781:
  *param_2 = local_res18[0];
  return param_2;
}



// FUNCTION 144f907b0 FUN_144f907b0 body=825 status=ok
// SIG undefined FUN_144f907b0(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_144f907b0(longlong *param_1,undefined4 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  uint *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_res18 [2];
  longlong local_res20;
  ulonglong local_248;
  longlong local_240;
  longlong local_238;
  ulonglong local_230 [2];
  code *local_220;
  ulonglong *local_218;
  code *local_210;
  longlong *local_208;
  undefined8 local_200;
  code *local_1f8;
  ulonglong *local_1f0;
  code *local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  uVar13 = 0;
  if (((param_3 != 0) && (lVar4 = FUN_144bef510(param_3), lVar4 == 0)) &&
     (puVar5 = (uint *)FUN_144b45d50(param_3,local_res18), (*puVar5 >> 5 & 1) == 0)) {
    puVar6 = (undefined4 *)FUN_144bef800(param_3,local_res18);
    local_248 = uVar13;
    if (((byte)*puVar6 & 0x1f) == 7) {
      local_248 = param_3;
    }
    if (local_248 != 0) {
      local_res20 = 0;
      FUN_144bef820(local_248,&local_240);
      uVar11 = uVar13;
      uVar14 = uVar13;
      if (0 < (int)(local_238 - local_240 >> 3)) {
        do {
          uVar1 = *(ulonglong *)(uVar14 + local_240);
          local_230[0] = uVar1;
          puVar6 = (undefined4 *)FUN_144bef800(uVar1,local_res18);
          uVar12 = uVar13;
          if (((byte)*puVar6 & 0x1f) == 8) {
            uVar12 = uVar1;
          }
          if (uVar12 != 0) {
            lVar4 = FUN_144befdb0(uVar12);
            lVar7 = FUN_144befdb0(&DAT_14c6daa80);
            if (lVar4 != lVar7) {
              lVar4 = FUN_144befdb0(uVar12);
              lVar7 = FUN_144befdb0(&DAT_14c6dab00);
              if (lVar4 != lVar7) goto LAB_144f908ec;
            }
            local_res20 = FUN_144bf0530(local_230);
            break;
          }
LAB_144f908ec:
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar14 = uVar14 + 8;
        } while ((int)uVar10 < (int)(local_238 - local_240 >> 3));
      }
      if (local_res20 != 0) {
        puVar8 = (undefined8 *)FUN_144bef430(local_248,local_230 + 1,&DAT_14c6dec60);
        pcVar2 = (char *)*puVar8;
        if (((ulonglong)local_218 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_218 & 0xfffffffffffffffe);
        }
        if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x01')) {
          lVar4 = *(longlong *)(*param_1 + 0x28);
          if ((lVar4 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar4 + 0x50) ||
              (cVar3 = FUN_144bdbf80(), cVar3 != '\0')))) {
            cVar3 = FUN_144bdbf80();
            if (cVar3 == '\0') {
              uVar9 = FUN_144bdc640(local_1d8);
              local_230[1] = 2;
              local_220 = FUN_144f93080;
              local_218 = &local_248;
              local_210 = FUN_144f50c70;
              local_208 = &local_res20;
              lVar4 = FUN_144bdc480(uVar9,
                                    "Record type \'{}\' contains a hkRelArray \'{}\' but is not marked with a hk::ContainsRelArrays attribute."
                                    ,local_230 + 1,0);
              *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar4 + 0x40) = 0x36b;
              *(undefined4 *)(lVar4 + 0x1c) = 0;
              FUN_144bdc690(local_1d8);
            }
            else {
              uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                    *(undefined1 *)(*param_1 + 0x30));
              local_200 = 2;
              local_1f8 = FUN_144f93080;
              local_1f0 = &local_248;
              local_1e8 = FUN_144f50c70;
              local_1e0 = &local_res20;
              lVar4 = FUN_144bdc480(uVar9,
                                    "Record type \'{}\' contains a hkRelArray \'{}\' but is not marked with a hk::ContainsRelArrays attribute."
                                    ,&local_200,0);
              *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar4 + 0x40) = 0x36b;
              *(undefined4 *)(lVar4 + 0x1c) = 0;
              FUN_144bdc8a0(local_188);
            }
          }
          local_res18[0] = 0;
          FUN_144f8aee0(local_res18);
          *param_2 = local_res18[0];
          return param_2;
        }
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f90af0 FUN_144f90af0 body=383 status=ok
// SIG undefined FUN_144f90af0(void)

int * FUN_144f90af0(undefined8 param_1,int *param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_res18 [16];
  undefined8 *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128 [32];
  
  puVar1 = (undefined8 *)param_3[1];
  puVar2 = (undefined8 *)*param_3;
  iVar7 = (int)((longlong)puVar1 - (longlong)puVar2 >> 3) + *(int *)(param_4 + 8);
  if ((int)(*(uint *)(param_4 + 0xc) & 0x7fffffff) < iVar7) {
    FUN_144bf0cc0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  bVar5 = 0;
  iVar7 = iVar7 + 1;
  if ((iVar7 < 0) || (0xffffffff < (ulonglong)((longlong)iVar7 * 3))) {
    bVar5 = 1;
  }
  uVar3 = (longlong)*(int *)(param_4 + 0x18) * 2;
  if ((*(int *)(param_4 + 0x18) < 0) || (bVar4 = 0, 0xffffffff < uVar3)) {
    bVar4 = 1;
  }
  if (((bool)((bVar5 ^ 1) & (bVar4 ^ 1))) && ((uint)uVar3 < (uint)((longlong)iVar7 * 3))) {
    FUN_144b2eb80(param_4 + 0x10,iVar7);
  }
  while( true ) {
    if (puVar1 == puVar2) {
      *param_2 = 0;
      return param_2;
    }
    local_138 = local_128;
    local_12c = 0x80000020;
    puVar1 = puVar1 + -1;
    local_130 = 1;
    local_128[0] = *puVar1;
    piVar6 = (int *)FUN_144f90c70(param_1,local_res18,&local_138,param_4);
    local_130 = 0;
    if (*piVar6 < 0) break;
    if ((-1 < (int)local_12c) && (local_138 != (undefined8 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_138,(ulonglong)(local_12c & 0x7fffffff) << 3);
    }
  }
  *param_2 = *piVar6;
  if ((int)local_12c < 0) {
    return param_2;
  }
  if (local_138 == (undefined8 *)0x0) {
    return param_2;
  }
  (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
            (&PTR_vftable_14c6e47c0,local_138,(ulonglong)(local_12c & 0x7fffffff) << 3);
  return param_2;
}



// FUNCTION 144f90c70 FUN_144f90c70 body=3742 status=ok
// SIG undefined FUN_144f90c70(void)

undefined4 *
FUN_144f90c70(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  undefined8 local_res18;
  undefined8 local_res20;
  uint *local_278;
  uint *local_270;
  undefined8 local_268;
  code *local_260;
  uint **local_258;
  code *local_250;
  uint **local_248;
  code *local_240;
  uint **local_238;
  uint *local_230;
  uint *local_228;
  undefined8 local_220;
  code *local_218;
  uint **local_210;
  code *local_208;
  uint **local_200;
  code *local_1f8;
  uint **local_1f0;
  uint *local_1e8;
  uint *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  lVar7 = param_3[1];
  puVar12 = *(uint **)(*param_3 + -8 + (longlong)(int)lVar7 * 8);
  local_res20 = param_4;
  local_270 = puVar12;
  lVar2 = FUN_144f92d80(param_4,&local_270);
  if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) {
    *(int *)(param_3 + 1) = (int)lVar7 + -1;
    goto LAB_144f91aec;
  }
  puVar3 = (undefined4 *)FUN_144bef800(puVar12,&local_res18);
  puVar6 = local_270;
  puVar13 = (uint *)0x0;
  puVar4 = puVar13;
  if (((byte)*puVar3 & 0x1f) == 8) {
    puVar4 = puVar12;
  }
  if (puVar4 == (uint *)0x0) {
LAB_144f91091:
    local_278 = (uint *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_144bef800(local_270,&local_res18);
    puVar12 = (uint *)0x0;
    if (((byte)*puVar3 & 0x1f) == 8) {
      puVar12 = puVar6;
    }
    puVar5 = (undefined8 *)FUN_144befe50(puVar12,1);
    puVar12 = local_270;
    puVar6 = puVar13;
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (uint *)*puVar5;
    }
    if ((int)((ulonglong)puVar6 >> 8) < 1) goto LAB_144f91091;
    puVar3 = (undefined4 *)FUN_144bef800(local_270,&local_res18);
    puVar6 = puVar13;
    if (((byte)*puVar3 & 0x1f) == 8) {
      puVar6 = puVar12;
    }
    FUN_144beff00(puVar6,&local_230);
    puVar12 = local_230;
    local_278 = local_230;
    if ((local_230 != (uint *)0x0) &&
       ((lVar7 = FUN_144f92d80(param_4,&local_278), lVar7 == 0 || (*(int *)(lVar7 + 4) < 0)))) {
      if (0 < (int)param_3[1]) {
        plVar10 = (longlong *)*param_3;
        puVar6 = puVar13;
        do {
          if ((uint *)*plVar10 == puVar12) {
            if (-1 < (int)puVar6) {
              lVar7 = *(longlong *)(*param_1 + 0x28);
              if ((lVar7 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
                  (cVar1 = FUN_144bdbf80(), cVar1 != '\0')))) {
                cVar1 = FUN_144bdbf80();
                if (cVar1 == '\0') {
                  uVar9 = FUN_144bdc640(local_1d8);
                  local_220 = 2;
                  local_218 = FUN_144bf0db0;
                  local_210 = &local_278;
                  local_208 = FUN_144bf0db0;
                  local_200 = &local_270;
                  lVar7 = FUN_144bdc480(uVar9,"Found loop in subtype \'{}\' of array type \'{}\'",
                                        &local_220,0);
                  *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                  *(undefined8 *)(lVar7 + 0x40) = 0x3a6;
                  *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e0;
                  FUN_144bdc690(local_1d8);
                }
                else {
                  uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                        *(undefined1 *)(*param_1 + 0x30));
                  local_268 = 2;
                  local_260 = FUN_144bf0db0;
                  local_258 = &local_278;
                  local_250 = FUN_144bf0db0;
                  local_248 = &local_270;
                  lVar7 = FUN_144bdc480(uVar9,"Found loop in subtype \'{}\' of array type \'{}\'",
                                        &local_268,0);
                  *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                  *(undefined8 *)(lVar7 + 0x40) = 0x3a6;
                  *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e0;
LAB_144f90fea:
                  FUN_144bdc8a0(local_188);
                }
              }
LAB_144f90ff3:
              local_res18 = (uint *)((ulonglong)local_res18 & 0xffffffff00000000);
              goto LAB_144f90ff9;
            }
            break;
          }
          puVar6 = (uint *)(ulonglong)((int)puVar6 + 1);
          puVar13 = (uint *)((longlong)puVar13 + 1);
          plVar10 = plVar10 + 1;
        } while ((longlong)puVar13 < (longlong)(int)param_3[1]);
      }
      iVar16 = (int)param_3[1] + 1;
      if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar16) {
        FUN_144bf0cc0(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar16);
        puVar12 = local_278;
      }
      plVar10 = (longlong *)(*param_3 + (longlong)(int)param_3[1] * 8);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)puVar12;
      }
      *(int *)(param_3 + 1) = iVar16;
      piVar8 = (int *)FUN_144f90c70(param_1,&local_res18,param_3,param_4);
      if (*piVar8 < 0) {
        if ((1 < *(byte *)(*(longlong *)(*param_1 + 0x28) + 0x50)) ||
           (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
          cVar1 = FUN_144bdbf80();
          if (cVar1 == '\0') {
            uVar9 = FUN_144bdc640(local_1d8);
            local_268 = 2;
            local_260 = FUN_144bf0db0;
            local_258 = &local_270;
            local_250 = FUN_144bf0db0;
            local_248 = &local_278;
            lVar7 = FUN_144bdc480(uVar9,"Array type \'{}\' has subtype \'{}\'",&local_268,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x3ab;
            FUN_144bdc690(local_1d8);
            *(int *)(param_3 + 1) = (int)param_3[1] + -1;
            *param_2 = 0x80040200;
            return param_2;
          }
          uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),2);
          local_268 = 2;
          local_260 = FUN_144bf0db0;
          local_258 = &local_270;
          local_250 = FUN_144bf0db0;
          local_248 = &local_278;
          lVar7 = FUN_144bdc480(uVar9,"Array type \'{}\' has subtype \'{}\'",&local_268,0);
          *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x3ab;
          FUN_144bdc8a0(local_188);
        }
        *(int *)(param_3 + 1) = (int)param_3[1] + -1;
        *param_2 = 0x80040200;
        return param_2;
      }
    }
  }
  FUN_144bef820(local_270,&local_1e8);
  local_228 = local_1e0;
  puVar12 = local_1e8;
  if (local_1e8 != local_1e0) {
    do {
      uVar14 = 0;
      local_230 = *(uint **)puVar12;
      puVar6 = *(uint **)(local_230 + 2);
      local_278 = puVar6;
      lVar7 = FUN_144f92d80(param_4,&local_278);
      if ((lVar7 == 0) || (*(int *)(lVar7 + 4) < 0)) {
        if (0 < (int)param_3[1]) {
          plVar10 = (longlong *)*param_3;
          uVar15 = uVar14;
          do {
            if ((uint *)*plVar10 == puVar6) {
              if (-1 < (int)uVar15) {
                lVar7 = *(longlong *)(*param_1 + 0x28);
                if ((lVar7 == 0) ||
                   ((*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30) &&
                    (cVar1 = FUN_144bdbf80(), cVar1 == '\0')))) goto LAB_144f90ff3;
                cVar1 = FUN_144bdbf80();
                if (cVar1 != '\0') {
                  local_228 = (uint *)FUN_144bf0530(&local_230);
                  uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                        *(undefined1 *)(*param_1 + 0x30));
                  local_220 = 3;
                  local_218 = FUN_144bf0db0;
                  local_210 = &local_270;
                  local_1f8 = FUN_144bf0db0;
                  local_208 = FUN_144f50c70;
                  local_1f0 = &local_278;
                  local_200 = &local_228;
                  lVar7 = FUN_144bdc480(uVar9,
                                        "Found loop in type \'{}\' with field \'{}\' of type \'{}\'."
                                        ,&local_220,0);
                  *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                  *(undefined8 *)(lVar7 + 0x40) = 0x3bc;
                  *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e1;
                  goto LAB_144f90fea;
                }
                local_res18 = (uint *)FUN_144bf0530(&local_230);
                uVar9 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_268 = 3;
                local_260 = FUN_144bf0db0;
                local_258 = &local_270;
                local_240 = FUN_144bf0db0;
                local_250 = FUN_144f50c70;
                local_238 = &local_278;
                local_248 = (uint **)&local_res18;
                lVar7 = FUN_144bdc480(uVar9,
                                      "Found loop in type \'{}\' with field \'{}\' of type \'{}\'.",
                                      &local_268,0);
                *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                *(undefined8 *)(lVar7 + 0x40) = 0x3bc;
                *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e1;
                FUN_144bdc690(local_1d8);
                goto LAB_144f90ff3;
              }
              break;
            }
            uVar15 = (ulonglong)((int)uVar15 + 1);
            uVar14 = uVar14 + 1;
            plVar10 = plVar10 + 1;
          } while ((longlong)uVar14 < (longlong)(int)param_3[1]);
        }
        iVar16 = (int)param_3[1] + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar16) {
          FUN_144bf0cc0(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar16);
          puVar6 = local_278;
        }
        plVar10 = (longlong *)(*param_3 + (longlong)(int)param_3[1] * 8);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)puVar6;
        }
        *(int *)(param_3 + 1) = iVar16;
        piVar8 = (int *)FUN_144f90c70(param_1,&local_res18,param_3);
        if (*piVar8 < 0) {
          if ((*(byte *)(*(longlong *)(*param_1 + 0x28) + 0x50) < 2) &&
             (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f91463;
          cVar1 = FUN_144bdbf80();
          if (cVar1 == '\0') {
            local_res18 = (uint *)FUN_144bf0530(&local_230);
            uVar9 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),2);
            local_268 = 3;
            local_260 = FUN_144bf0db0;
            local_258 = &local_270;
            local_240 = FUN_144bf0db0;
            local_250 = FUN_144f50c70;
            local_238 = &local_278;
            local_248 = (uint **)&local_res18;
            lVar7 = FUN_144bdc480(uVar9,"Type \'{}\' has field \'{}\' of type \'{}\'",&local_268,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x3c1;
            FUN_144bdc690(local_1d8);
            *(int *)(param_3 + 1) = (int)param_3[1] + -1;
            *param_2 = 0x80040200;
            return param_2;
          }
          local_228 = (uint *)FUN_144bf0530(&local_230);
          uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),2);
          local_268 = 3;
          local_260 = FUN_144bf0db0;
          local_258 = &local_270;
          local_240 = FUN_144bf0db0;
          local_250 = FUN_144f50c70;
          local_238 = &local_278;
          local_248 = &local_228;
          lVar7 = FUN_144bdc480(uVar9,"Type \'{}\' has field \'{}\' of type \'{}\'",&local_268,0);
          *(undefined8 *)(lVar7 + 0x40) = 0x3c1;
          goto LAB_144f9144f;
        }
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != local_228);
  }
  if ((*local_270 >> 0xe & 1) != 0) {
    plVar10 = (longlong *)FUN_144befea0(local_270,0x4000);
    if ((plVar10 != (longlong *)0x0) && (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)
       ) {
      plVar17 = plVar10 + 1;
      plVar10 = plVar17 + *plVar10 * 2;
      param_4 = local_res20;
      for (; local_res20 = param_4, plVar17 != plVar10; plVar17 = plVar17 + 2) {
        puVar12 = (uint *)*plVar17;
        local_278 = puVar12;
        lVar7 = FUN_144f92d80();
        if ((lVar7 == 0) || (*(int *)(lVar7 + 4) < 0)) {
          iVar16 = 0;
          lVar7 = 0;
          if (0 < (int)param_3[1]) {
            plVar11 = (longlong *)*param_3;
            do {
              if ((uint *)*plVar11 == puVar12) {
                if (-1 < iVar16) {
                  lVar7 = *(longlong *)(*param_1 + 0x28);
                  if ((lVar7 != 0) &&
                     ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
                      (cVar1 = FUN_144bdbf80(), cVar1 != '\0')))) {
                    cVar1 = FUN_144bdbf80();
                    if (cVar1 == '\0') {
                      uVar9 = FUN_144bdc640(local_1d8);
                      local_268 = 2;
                      local_260 = FUN_144bf0db0;
                      local_258 = &local_270;
                      local_250 = FUN_144bf0db0;
                      local_248 = &local_278;
                      lVar7 = FUN_144bdc480(uVar9,
                                            "Found loop in type \'{}\' with interface type \'{}\'.",
                                            &local_268,0);
                      *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                      *(undefined8 *)(lVar7 + 0x40) = 0x3d2;
                      *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e2;
                      FUN_144bdc690(local_1d8);
                      local_res18 = (uint *)((ulonglong)local_res18._4_4_ << 0x20);
                      goto LAB_144f90ff9;
                    }
                    uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                          *(undefined1 *)(*param_1 + 0x30));
                    local_220 = 2;
                    local_218 = FUN_144bf0db0;
                    local_210 = &local_270;
                    local_208 = FUN_144bf0db0;
                    local_200 = &local_278;
                    lVar7 = FUN_144bdc480(uVar9,
                                          "Found loop in type \'{}\' with interface type \'{}\'.",
                                          &local_220,0);
                    *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                    *(undefined8 *)(lVar7 + 0x40) = 0x3d2;
                    *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e2;
                    FUN_144bdc8a0(local_188);
                  }
                  local_res18 = (uint *)((ulonglong)local_res18._4_4_ << 0x20);
                  goto LAB_144f90ff9;
                }
                break;
              }
              iVar16 = iVar16 + 1;
              lVar7 = lVar7 + 1;
              plVar11 = plVar11 + 1;
            } while (lVar7 < (int)param_3[1]);
          }
          iVar16 = (int)param_3[1] + 1;
          if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar16) {
            FUN_144bf0cc0(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar16);
            puVar12 = local_278;
          }
          plVar11 = (longlong *)(*param_3 + (longlong)(int)param_3[1] * 8);
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = (longlong)puVar12;
          }
          *(int *)(param_3 + 1) = iVar16;
          piVar8 = (int *)FUN_144f90c70(param_1,&local_res18,param_3);
          if (*piVar8 < 0) {
            if ((*(byte *)(*(longlong *)(*param_1 + 0x28) + 0x50) < 2) &&
               (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f91463;
            cVar1 = FUN_144bdbf80();
            if (cVar1 == '\0') {
              uVar9 = FUN_144bdc640(local_1d8);
              local_268 = 2;
              local_260 = FUN_144bf0db0;
              local_258 = &local_270;
              local_250 = FUN_144bf0db0;
              local_248 = &local_278;
              lVar7 = FUN_144bdc480(uVar9,"Type \'{}\' has interface \'{}\'",&local_268,0);
              *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x3d7;
              FUN_144bdc690(local_1d8);
              *(int *)(param_3 + 1) = (int)param_3[1] + -1;
              *param_2 = 0x80040200;
              return param_2;
            }
            uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),2);
            local_268 = 2;
            local_260 = FUN_144bf0db0;
            local_258 = &local_270;
            local_250 = FUN_144bf0db0;
            local_248 = &local_278;
            lVar7 = FUN_144bdc480(uVar9,"Type \'{}\' has interface \'{}\'",&local_268,0);
            *(undefined8 *)(lVar7 + 0x40) = 0x3d7;
            goto LAB_144f9144f;
          }
        }
        param_4 = local_res20;
      }
    }
  }
  puVar12 = *(uint **)(local_270 + 2);
  local_278 = puVar12;
  if ((puVar12 != (uint *)0x0) &&
     ((lVar7 = FUN_144f92d80(param_4,&local_278), lVar7 == 0 || (*(int *)(lVar7 + 4) < 0)))) {
    iVar16 = 0;
    if (0 < (int)param_3[1]) {
      lVar7 = 0;
      plVar10 = (longlong *)*param_3;
      do {
        if ((uint *)*plVar10 == puVar12) {
          if (-1 < iVar16) {
            lVar7 = *(longlong *)(*param_1 + 0x28);
            if ((lVar7 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
                (cVar1 = FUN_144bdbf80(), cVar1 != '\0')))) {
              cVar1 = FUN_144bdbf80();
              if (cVar1 == '\0') {
                uVar9 = FUN_144bdc640(local_1d8);
                local_268 = 2;
                local_260 = FUN_144bf0db0;
                local_258 = &local_270;
                local_250 = FUN_144bf0db0;
                local_248 = &local_278;
                lVar7 = FUN_144bdc480(uVar9,"Found loop in type \'{}\' with parent type \'{}\'.",
                                      &local_268,0);
                *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                *(undefined8 *)(lVar7 + 0x40) = 0x3e4;
                *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e3;
                FUN_144bdc690(local_1d8);
                local_res18 = (uint *)((ulonglong)local_res18._4_4_ << 0x20);
                goto LAB_144f90ff9;
              }
              uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                    *(undefined1 *)(*param_1 + 0x30));
              local_220 = 2;
              local_218 = FUN_144bf0db0;
              local_210 = &local_270;
              local_208 = FUN_144bf0db0;
              local_200 = &local_278;
              lVar7 = FUN_144bdc480(uVar9,"Found loop in type \'{}\' with parent type \'{}\'.",
                                    &local_220,0);
              *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x3e4;
              *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e3;
              FUN_144bdc8a0(local_188);
            }
            local_res18 = (uint *)((ulonglong)local_res18._4_4_ << 0x20);
LAB_144f90ff9:
            FUN_144f8aee0(&local_res18);
            *(int *)(param_3 + 1) = (int)param_3[1] + -1;
            *param_2 = (undefined4)local_res18;
            return param_2;
          }
          break;
        }
        iVar16 = iVar16 + 1;
        lVar7 = lVar7 + 1;
        plVar10 = plVar10 + 1;
      } while (lVar7 < (int)param_3[1]);
    }
    iVar16 = (int)param_3[1] + 1;
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar16) {
      FUN_144bf0cc0(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar16);
      puVar12 = local_278;
    }
    plVar10 = (longlong *)(*param_3 + (longlong)(int)param_3[1] * 8);
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)puVar12;
    }
    *(int *)(param_3 + 1) = iVar16;
    piVar8 = (int *)FUN_144f90c70(param_1,&local_res18,param_3,param_4);
    if (*piVar8 < 0) {
      if ((1 < *(byte *)(*(longlong *)(*param_1 + 0x28) + 0x50)) ||
         (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar9 = FUN_144bdc640(local_1d8);
          local_268 = 2;
          local_260 = FUN_144bf0db0;
          local_258 = &local_270;
          local_250 = FUN_144bf0db0;
          local_248 = &local_278;
          lVar7 = FUN_144bdc480(uVar9,"Type \'{}\' has parent \'{}\'",&local_268,0);
          *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x3e9;
          FUN_144bdc690(local_1d8);
          *(int *)(param_3 + 1) = (int)param_3[1] + -1;
          *param_2 = 0x80040200;
          return param_2;
        }
        uVar9 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),2);
        local_268 = 2;
        local_260 = FUN_144bf0db0;
        local_258 = &local_270;
        local_250 = FUN_144bf0db0;
        local_248 = &local_278;
        lVar7 = FUN_144bdc480(uVar9,"Type \'{}\' has parent \'{}\'",&local_268,0);
        *(undefined8 *)(lVar7 + 0x40) = 0x3e9;
LAB_144f9144f:
        *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
        FUN_144bdc8a0(local_188);
      }
LAB_144f91463:
      *(int *)(param_3 + 1) = (int)param_3[1] + -1;
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  FUN_144f60ac0(param_4,&local_1e8,&local_270);
  *(int *)(param_3 + 1) = (int)param_3[1] + -1;
LAB_144f91aec:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f91b10 FUN_144f91b10 body=1107 status=ok
// SIG undefined FUN_144f91b10(void)

undefined4 * FUN_144f91b10(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong local_res18;
  undefined8 local_res20;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  code *local_220;
  ulonglong *local_218;
  code *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  code *local_1f8;
  ulonglong *local_1f0;
  code *local_1e8;
  undefined8 *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  lVar4 = FUN_144bef4c0(*(undefined8 *)(*param_3 + -8 + (longlong)(int)param_3[1] * 8));
  uVar1 = *(ushort *)(lVar4 + 8);
  plVar10 = (longlong *)(lVar4 + 0x10);
  do {
    if (plVar10 == (longlong *)(((ulonglong)uVar1 + 1) * 0x10 + lVar4)) {
      *param_2 = 0;
LAB_144f91c26:
      *(int *)(param_3 + 1) = (int)param_3[1] + -1;
      return param_2;
    }
    if (*(char *)plVar10[1] == 't') {
      lVar2 = *plVar10;
      lVar5 = FUN_144bef4c0();
      if (lVar5 != 0) {
        iVar11 = (int)param_3[1];
        iVar9 = 0;
        lVar5 = 0;
        if (0 < iVar11) {
          plVar6 = (longlong *)*param_3;
          do {
            if (*plVar6 == lVar2) {
              if (-1 < iVar9) {
                lVar4 = *(longlong *)(*param_1 + 0x28);
                if ((lVar4 != 0) &&
                   ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar4 + 0x50) ||
                    (cVar3 = FUN_144bdbf80(), cVar3 != '\0')))) {
                  cVar3 = FUN_144bdbf80();
                  if (cVar3 == '\0') {
                    local_res20 = FUN_144beee40(lVar2);
                    local_res18 = FUN_144beee40(*(undefined8 *)
                                                 (*param_3 + -8 + (longlong)(int)param_3[1] * 8));
                    uVar8 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                          *(undefined1 *)(*param_1 + 0x30));
                    local_200 = 2;
                    local_1f8 = FUN_144f50c70;
                    local_1f0 = &local_res18;
                    local_1e8 = FUN_144f50c70;
                    local_1e0 = &local_res20;
                    lVar4 = FUN_144bdc480(uVar8,
                                          "Found loop in type \'{}\' with type template parameter \'{}\'."
                                          ,&local_200,0);
                    *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                    *(undefined8 *)(lVar4 + 0x40) = 0x403;
                    *(undefined4 *)(lVar4 + 0x1c) = 0xa62e68e4;
                    FUN_144bdc690(local_1d8);
                  }
                  else {
                    local_230 = FUN_144beee40(lVar2);
                    local_238 = FUN_144beee40(*(undefined8 *)
                                               (*param_3 + -8 + (longlong)(int)param_3[1] * 8));
                    uVar8 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                          *(undefined1 *)(*param_1 + 0x30));
                    local_228 = 2;
                    local_220 = FUN_144f50c70;
                    local_218 = &local_238;
                    local_210 = FUN_144f50c70;
                    local_208 = &local_230;
                    lVar4 = FUN_144bdc480(uVar8,
                                          "Found loop in type \'{}\' with type template parameter \'{}\'."
                                          ,&local_228,0);
                    *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                    *(undefined8 *)(lVar4 + 0x40) = 0x403;
                    *(undefined4 *)(lVar4 + 0x1c) = 0xa62e68e4;
                    FUN_144bdc8a0(local_188);
                  }
                }
                local_res18 = local_res18 & 0xffffffff00000000;
                FUN_144f8aee0(&local_res18);
                *param_2 = (undefined4)local_res18;
                goto LAB_144f91c26;
              }
              break;
            }
            iVar9 = iVar9 + 1;
            lVar5 = lVar5 + 1;
            plVar6 = plVar6 + 1;
          } while (lVar5 < iVar11);
        }
        iVar11 = iVar11 + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar11) {
          FUN_144bf0cc0(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar11);
        }
        plVar6 = (longlong *)(*param_3 + (longlong)(int)param_3[1] * 8);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = lVar2;
        }
        *(int *)(param_3 + 1) = iVar11;
        piVar7 = (int *)FUN_144f91b10(param_1,&local_res18,param_3);
        if (*piVar7 < 0) {
          if ((1 < *(byte *)(*(longlong *)(*param_1 + 0x28) + 0x50)) ||
             (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
            cVar3 = FUN_144bdbf80();
            if (cVar3 == '\0') {
              local_res20 = FUN_144beee40(lVar2);
              local_res18 = FUN_144beee40(*(undefined8 *)
                                           (*param_3 + -8 + (longlong)(int)param_3[1] * 8));
              uVar8 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),2);
              local_228 = 2;
              local_220 = FUN_144f50c70;
              local_218 = &local_res18;
              local_210 = FUN_144f50c70;
              local_208 = &local_res20;
              lVar4 = FUN_144bdc480(uVar8,"Type \'{}\' has argument \'{}\'",&local_228,0);
              *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              *(undefined8 *)(lVar4 + 0x40) = 0x408;
              FUN_144bdc690(local_1d8);
              *param_2 = 0x80040200;
              goto LAB_144f91c26;
            }
            local_238 = FUN_144beee40(lVar2);
            local_230 = FUN_144beee40(*(undefined8 *)(*param_3 + -8 + (longlong)(int)param_3[1] * 8)
                                     );
            uVar8 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),2);
            local_228 = 2;
            local_220 = FUN_144f50c70;
            local_218 = &local_230;
            local_210 = FUN_144f50c70;
            local_208 = &local_238;
            lVar4 = FUN_144bdc480(uVar8,"Type \'{}\' has argument \'{}\'",&local_228,0);
            *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            *(undefined8 *)(lVar4 + 0x40) = 0x408;
            FUN_144bdc8a0(local_188);
          }
          *param_2 = 0x80040200;
          goto LAB_144f91c26;
        }
      }
    }
    plVar10 = plVar10 + 2;
  } while( true );
}



// FUNCTION 144f91f70 FUN_144f91f70 body=1128 status=ok
// SIG undefined FUN_144f91f70(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_144f91f70(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong local_res20;
  ulonglong local_248 [2];
  code *local_238;
  ulonglong *local_230;
  code *local_228;
  ulonglong *local_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  ulonglong *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  uVar3 = 0;
  local_res20 = local_res20 & 0xffffffff00000000;
  local_248[0] = local_248[0] & 0xffffffff00000000;
  local_1f8 = FUN_144bef4c0(param_3);
  uVar6 = 0;
  if (local_1f8 != 0) {
    uVar9 = *(uint *)(local_1f8 + 8) & 0xffff;
    if (0xff < uVar9) {
      lVar5 = *(longlong *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (cVar2 = FUN_144bdbf80(), cVar2 != '\0')))) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          local_res20 = FUN_144beee40(param_3);
          uVar4 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_1e0 = &local_res20;
          local_1f0 = 1;
          local_1e8 = FUN_144f50c70;
          lVar5 = FUN_144bdc480(uVar4,
                                "Template type \'{}\' has invalid number of template parameters greater than 255."
                                ,&local_1f0,0);
          *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x418;
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          FUN_144bdc690(local_1d8);
        }
        else {
          local_248[0] = FUN_144beee40(param_3);
          uVar4 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                *(undefined1 *)(*param_1 + 0x30));
          local_230 = local_248;
          local_248[1] = 1;
          local_238 = FUN_144f50c70;
          lVar5 = FUN_144bdc480(uVar4,
                                "Template type \'{}\' has invalid number of template parameters greater than 255."
                                ,local_248 + 1,0);
          *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x418;
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          FUN_144bdc8a0(local_188);
        }
      }
      local_res20 = local_res20 & 0xffffffff00000000;
      FUN_144f8aee0(&local_res20);
      *param_2 = (int)local_res20;
      return param_2;
    }
    local_res20 = local_res20 & 0xffffffff00000000;
    uVar8 = uVar3;
    if (uVar9 != 0) {
      do {
        plVar7 = (longlong *)(((longlong)(int)uVar3 + 1) * 0x10 + local_1f8);
        if (*(char *)plVar7[1] == 't') {
          if (*plVar7 == 0) {
            FUN_144f8aee0(local_248);
            lVar5 = *(longlong *)(*param_1 + 0x28);
            if ((lVar5 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
                (cVar2 = FUN_144bdbf80(), cVar2 != '\0')))) {
              cVar2 = FUN_144bdbf80();
              if (cVar2 == '\0') {
                local_218 = FUN_144beee40(param_3);
                uVar8 = uVar8 | 0x10;
                uVar4 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_230 = &local_218;
              }
              else {
                local_210 = FUN_144beee40(param_3);
                uVar8 = uVar8 | 0x20;
                uVar4 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_230 = &local_210;
              }
              local_248[1] = 2;
              local_228 = FUN_144f50970;
              local_220 = &local_res20;
              local_238 = FUN_144f50c70;
              lVar5 = FUN_144bdc480(uVar4,
                                    "Template type \'{}\' has invalid NULL template type parameter #{}."
                                    ,local_248 + 1,0);
              *(undefined8 *)(lVar5 + 0x40) = 0x41e;
              *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((uVar8 & 0x20) != 0) {
                uVar8 = uVar8 & 0xffffffdf;
                FUN_144bdc8a0(local_188);
              }
              if ((uVar8 & 0x10) != 0) {
                uVar8 = uVar8 & 0xffffffef;
                FUN_144bdc690(local_1d8);
              }
            }
            if (*(char *)*param_1 != '\0') break;
          }
          pcVar1 = *(code **)(*param_1 + 0x10);
          if ((pcVar1 != (code *)0x0) &&
             (cVar2 = (*pcVar1)(*plVar7,*(undefined8 *)(*param_1 + 0x18)), cVar2 == '\0')) {
            FUN_144f8aee0(local_248);
            lVar5 = *(longlong *)(*param_1 + 0x28);
            if ((lVar5 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
                (cVar2 = FUN_144bdbf80(), cVar2 != '\0')))) {
              cVar2 = FUN_144bdbf80();
              if (cVar2 == '\0') {
                local_208 = FUN_144beee40(param_3);
                uVar8 = uVar8 | 0x40;
                uVar4 = FUN_144bdc640(local_1d8,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_230 = &local_208;
              }
              else {
                local_200 = FUN_144beee40(param_3);
                uVar8 = uVar8 | 0x80;
                uVar4 = FUN_144bdc810(local_188,*(undefined8 *)(*param_1 + 0x28),
                                      *(undefined1 *)(*param_1 + 0x30));
                local_230 = &local_200;
              }
              local_248[1] = 2;
              local_228 = FUN_144f50970;
              local_220 = &local_res20;
              local_238 = FUN_144f50c70;
              lVar5 = FUN_144bdc480(uVar4,
                                    "Template type \'{}\' has unreachable template type parameter #{}."
                                    ,local_248 + 1,0);
              *(undefined8 *)(lVar5 + 0x40) = 0x41f;
              *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
              if ((char)uVar8 < '\0') {
                uVar8 = uVar8 & 0xffffff7f;
                FUN_144bdc8a0(local_188);
              }
              if ((uVar8 & 0x40) != 0) {
                uVar8 = uVar8 & 0xffffffbf;
                FUN_144bdc690(local_1d8);
              }
            }
            if (*(char *)*param_1 != '\0') break;
          }
        }
        uVar3 = (int)local_res20 + 1;
        local_res20 = CONCAT44(local_res20._4_4_,uVar3);
      } while ((int)uVar3 < (int)uVar9);
      uVar6 = (undefined4)local_248[0];
    }
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 144f923e0 FUN_144f923e0 body=2335 status=ok
// SIG undefined FUN_144f923e0(void)

int * FUN_144f923e0(longlong *param_1,int *param_2,longlong *param_3,undefined8 **param_4)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  ulonglong local_res18;
  ulonglong local_158;
  undefined8 local_150;
  code *pcStack_148;
  char *local_140;
  code *pcStack_138;
  ulonglong *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  int local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  code *pcStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8 [8];
  undefined1 local_78 [80];
  
  puVar7 = (undefined8 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  local_res18 = local_res18 & 0xffffffff00000000;
  local_158._0_4_ = 0;
  if (puVar7 != puVar5) {
    do {
      piVar2 = (int *)FUN_144f8aef0(param_1,&local_158,*puVar7);
      if ((*piVar2 < 0) && (FUN_144f8aee0(&local_res18), *(char *)*param_1 != '\0'))
      goto LAB_144f9273d;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar5);
    local_158._0_4_ = (int)local_res18;
  }
  iVar6 = (int)local_158;
  if ((int)local_158 < 0) {
    if (*(char *)(*(longlong *)(*param_1 + 0x28) + 0x50) == '\0') goto LAB_144f92541;
    lVar3 = FUN_144bdc640(&local_c8,*(longlong *)(*param_1 + 0x28),1);
    *(undefined8 *)(lVar3 + 0x40) = 0x431;
  }
  else {
    puVar7 = (undefined8 *)*param_3;
    if (puVar7 != puVar5) {
      do {
        piVar2 = (int *)FUN_144f91f70(param_1,&local_158,*puVar7);
        if ((*piVar2 < 0) && (FUN_144f8aee0(&local_res18), *(char *)*param_1 != '\0'))
        goto LAB_144f9273d;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar5);
      iVar6 = (int)local_res18;
    }
    local_158._0_4_ = iVar6;
    if (-1 < iVar6) {
      puVar7 = (undefined8 *)*param_3;
      if (puVar7 != puVar5) {
        do {
          uVar4 = *puVar7;
          lVar3 = FUN_144bef4c0(uVar4);
          if (lVar3 != 0) {
            local_c8 = local_b8;
            local_bc = 0x80000008;
            local_c0 = 1;
            local_b8[0] = uVar4;
            piVar2 = (int *)FUN_144f91b10(param_1,local_108,&local_c8);
            local_158._0_4_ = *piVar2;
            if ((int)local_158 < 0) {
              if (*(char *)(*(longlong *)(*param_1 + 0x28) + 0x50) != '\0') {
                lVar3 = FUN_144bdc640(local_78,*(longlong *)(*param_1 + 0x28),1);
                local_150 = 2;
                *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
                pcStack_148 = FUN_144be34b0;
                local_140 = "checkSingleParams(templateStack)";
                pcStack_138 = FUN_144bdef40;
                local_130 = &local_158;
                local_100 = 2;
                pcStack_f8 = FUN_144be34b0;
                *(undefined8 *)(lVar3 + 0x40) = 0xda;
                local_f0 = 0x49c14508;
                uStack_ec = 1;
                uStack_e8 = 0x44bdef40;
                uStack_e4 = 1;
                local_e0 = local_130;
                uVar4 = FUN_144bdc480(lVar3,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_100,0);
                local_d8 = 0;
                FUN_144bdc480(uVar4,&DAT_14996de1b,&local_d8);
                FUN_144bdc690(local_78);
              }
              iVar6 = (int)local_158;
              local_c0 = 0;
              if ((-1 < (int)local_bc) && (local_c8 != (undefined8 *)0x0)) {
                (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                          (&PTR_vftable_14c6e47c0,local_c8,(ulonglong)(local_bc & 0x7fffffff) << 3);
              }
              if ((iVar6 < 0) && (FUN_144f8aee0(&local_res18), *(char *)*param_1 != '\0'))
              goto LAB_144f9273d;
            }
            else {
              local_c0 = 0;
              if ((-1 < (int)local_bc) && (local_c8 != (undefined8 *)0x0)) {
                (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                          (&PTR_vftable_14c6e47c0,local_c8,(ulonglong)(local_bc & 0x7fffffff) << 3);
              }
            }
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar5);
        iVar6 = (int)local_res18;
      }
      local_158._0_4_ = iVar6;
      if (iVar6 < 0) {
        if (*(char *)(*(longlong *)(*param_1 + 0x28) + 0x50) != '\0') {
          lVar3 = FUN_144bdc640(local_78,*(longlong *)(*param_1 + 0x28),1);
          *(undefined8 *)(lVar3 + 0x40) = 0x43f;
LAB_144f927c2:
          local_150 = 2;
          *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
          pcStack_148 = FUN_144f930b0;
          local_140 = "status";
          pcStack_138 = FUN_144bdef40;
          local_130 = &local_158;
          local_100 = 2;
          pcStack_f8 = FUN_144f930b0;
          local_f0 = 0x4998f108;
          uStack_ec = 1;
          uStack_e8 = 0x44bdef40;
          uStack_e4 = 1;
          local_e0 = local_130;
          uVar4 = FUN_144bdc480(lVar3,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_100,0);
          local_res18 = 0;
          FUN_144bdc480(uVar4,&DAT_14996de1b,&local_res18,0);
          FUN_144bdc690(local_78);
          *param_2 = (int)local_158;
          return param_2;
        }
        goto LAB_144f92541;
      }
      puVar7 = (undefined8 *)*param_3;
      if (puVar7 != puVar5) {
        do {
          piVar2 = (int *)FUN_144f8b210(param_1,local_108,*puVar7);
          if ((*piVar2 < 0) && (FUN_144f8aee0(&local_res18), *(char *)*param_1 != '\0'))
          goto LAB_144f9273d;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar5);
        iVar6 = (int)local_res18;
      }
      local_158._0_4_ = iVar6;
      if (iVar6 < 0) {
        if (*(char *)(*(longlong *)(*param_1 + 0x28) + 0x50) != '\0') {
          lVar3 = FUN_144bdc640(local_78,*(longlong *)(*param_1 + 0x28),1);
          *(undefined8 *)(lVar3 + 0x40) = 0x446;
          goto LAB_144f927c2;
        }
        goto LAB_144f92541;
      }
      puVar7 = (undefined8 *)*param_3;
      if (puVar7 != puVar5) {
        do {
          piVar2 = (int *)FUN_144f8db40(param_1,local_108,*puVar7);
          if ((*piVar2 < 0) && (FUN_144f8aee0(&local_res18), *(char *)*param_1 != '\0')) {
LAB_144f9273d:
            *param_2 = (int)local_res18;
            return param_2;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar5);
        iVar6 = (int)local_res18;
      }
      local_158._0_4_ = iVar6;
      if (iVar6 < 0) {
        if (*(char *)(*(longlong *)(*param_1 + 0x28) + 0x50) != '\0') {
          lVar3 = FUN_144bdc640(local_78,*(longlong *)(*param_1 + 0x28),1);
          *(undefined8 *)(lVar3 + 0x40) = 0x44d;
          goto LAB_144f927c2;
        }
        goto LAB_144f92541;
      }
      uVar1 = *(uint *)(param_4 + 1);
      local_128 = (undefined8 *)0x0;
      puVar7 = (undefined8 *)0x0;
      if (*param_4 != (undefined8 *)0x0) {
        puVar7 = *param_4;
      }
      if ((int)uVar1 < 1) {
        local_128 = (undefined8 *)0x0;
        local_120 = -0x8000000000000000;
      }
      else {
        local_128 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
        uVar9 = (ulonglong)uVar1;
        local_120 = CONCAT44(uVar1,uVar1);
        puVar5 = local_128;
        do {
          if (puVar5 != (undefined8 *)0x0) {
            uVar4 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar5 = uVar4;
          }
          uVar9 = uVar9 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar9 != 0);
      }
      if (*(int *)((longlong)param_4[2] + 4) == -2) {
        local_118 = (undefined8 *)FUN_144b3d480();
        local_110 = 0;
      }
      else {
        local_110 = *(int *)(param_4 + 3);
        local_118 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(local_110 + 1) << 3);
        FUN_144b3d470(local_118,param_4[2],(longlong)(*(int *)(param_4 + 3) + 1) << 3);
      }
      local_d8 = *param_3;
      uStack_d0 = (undefined4)param_3[1];
      uStack_cc = *(undefined4 *)((longlong)param_3 + 0xc);
      piVar2 = (int *)FUN_144f90af0(param_1,local_108,&local_d8,&local_128);
      if (*piVar2 < 0) {
        FUN_144f8aee0(&local_res18);
        iVar6 = (int)local_res18;
        if (*(char *)*param_1 == '\0') goto LAB_144f92ab8;
        *param_2 = (int)local_res18;
LAB_144f92a95:
        if (local_118 == (undefined8 *)0x0) goto LAB_144f92ca8;
        iVar6 = *(int *)((longlong)local_118 + 4);
      }
      else {
LAB_144f92ab8:
        local_res18 = CONCAT44(local_res18._4_4_,iVar6);
        if (iVar6 < 0) {
          if (*(char *)(*(longlong *)(*param_1 + 0x28) + 0x50) != '\0') {
            lVar3 = FUN_144bdc640(local_78,*(longlong *)(*param_1 + 0x28),1);
            local_150 = 2;
            *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
            pcStack_148 = FUN_144f930b0;
            local_140 = "status";
            pcStack_138 = FUN_144bdef40;
            local_130 = &local_res18;
            local_100 = 2;
            pcStack_f8 = FUN_144f930b0;
            *(undefined8 *)(lVar3 + 0x40) = 0x452;
            local_f0 = 0x4998f108;
            uStack_ec = 1;
            uStack_e8 = 0x44bdef40;
            uStack_e4 = 1;
            local_e0 = local_130;
            uVar4 = FUN_144bdc480(lVar3,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_100,0);
            local_d8 = 0;
            FUN_144bdc480(uVar4,&DAT_14996de1b,&local_d8,0);
            FUN_144bdc690(local_78);
            iVar6 = (int)local_res18;
          }
          *param_2 = iVar6;
          goto LAB_144f92a95;
        }
        if (&local_128 != param_4) {
          *(undefined4 *)(param_4 + 1) = 0;
          if ((-1 < (int)*(uint *)((longlong)param_4 + 0xc)) && (*param_4 != (undefined8 *)0x0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*param_4,
                       (ulonglong)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) << 3);
          }
          *param_4 = (undefined8 *)0x0;
          *(undefined4 *)(param_4 + 1) = 0;
          *(undefined4 *)((longlong)param_4 + 0xc) = 0x80000000;
          FUN_144f6a4f0(&local_128,&PTR_vftable_14c6e47a0);
          *param_4 = local_128;
          *(undefined4 *)(param_4 + 1) = (undefined4)local_120;
          *(uint *)((longlong)param_4 + 0xc) = local_120._4_4_;
          local_120 = 0;
          local_128 = (undefined8 *)0x0;
        }
        ppuVar8 = param_4 + 2;
        if (&local_118 != ppuVar8) {
          puVar7 = *ppuVar8;
          if ((puVar7 != (undefined8 *)0x0) && (*(int *)((longlong)puVar7 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,puVar7,0);
            FUN_144b3ec00(ppuVar8);
          }
          *ppuVar8 = local_118;
          *(int *)(param_4 + 3) = local_110;
          local_118 = (undefined8 *)FUN_144b3d480();
          local_110 = 0;
        }
        *param_2 = iVar6;
        if (local_118 == (undefined8 *)0x0) goto LAB_144f92ca8;
        iVar6 = *(int *)((longlong)local_118 + 4);
      }
      if (iVar6 != -2) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_118,0);
        FUN_144b3ec00(&local_118);
      }
LAB_144f92ca8:
      lVar3 = local_120;
      uVar1 = local_120._4_4_;
      local_120 = (ulonglong)local_120._4_4_ << 0x20;
      if (lVar3 < 0) {
        return param_2;
      }
      if (local_128 == (undefined8 *)0x0) {
        return param_2;
      }
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_128,(ulonglong)(uVar1 & 0x7fffffff) << 3);
      return param_2;
    }
    if (*(char *)(*(longlong *)(*param_1 + 0x28) + 0x50) == '\0') goto LAB_144f92541;
    lVar3 = FUN_144bdc640(&local_c8,*(longlong *)(*param_1 + 0x28),1);
    *(undefined8 *)(lVar3 + 0x40) = 0x439;
  }
  local_150 = 2;
  *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectionCheckUtil.cpp";
  pcStack_148 = FUN_144f930b0;
  local_140 = "status";
  pcStack_138 = FUN_144bdef40;
  local_130 = &local_158;
  local_100 = 2;
  pcStack_f8 = FUN_144f930b0;
  local_f0 = 0x4998f108;
  uStack_ec = 1;
  uStack_e8 = 0x44bdef40;
  uStack_e4 = 1;
  local_e0 = local_130;
  uVar4 = FUN_144bdc480(lVar3,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_100,0);
  local_res18 = 0;
  FUN_144bdc480(uVar4,&DAT_14996de1b,&local_res18,0);
  FUN_144bdc690(&local_c8);
  iVar6 = (int)local_158;
LAB_144f92541:
  *param_2 = iVar6;
  return param_2;
}



// FUNCTION 144f92d00 FUN_144f92d00 body=125 status=ok
// SIG undefined FUN_144f92d00(void)

uint FUN_144f92d00(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong local_res8;
  
  local_res8 = param_1;
  lVar2 = FUN_144f92d80(*(undefined8 *)(param_2 + 8),&local_res8);
  if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) {
    return 1;
  }
  plVar3 = *(longlong **)(param_2 + 0x10);
  uVar1 = 0;
  iVar4 = (int)(*(longlong *)(param_2 + 0x18) - (longlong)plVar3 >> 3);
  if (0 < iVar4) {
    lVar2 = 0;
    do {
      if (*plVar3 == param_1) goto LAB_144f92d6d;
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar2 < iVar4);
  }
  uVar1 = 0xffffffff;
LAB_144f92d6d:
  return uVar1 >> 0x1f ^ 1;
}



// FUNCTION 144f92d80 FUN_144f92d80 body=149 status=ok
// SIG undefined FUN_144f92d80(void)

uint * FUN_144f92d80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 8) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144f92e20 FUN_144f92e20 body=111 status=ok
// SIG undefined FUN_144f92e20(void)

undefined4 *
FUN_144f92e20(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dddf0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f92e90 FUN_144f92e90 body=111 status=ok
// SIG undefined FUN_144f92e90(void)

undefined4 *
FUN_144f92e90(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dc530;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f92f00 FUN_144f92f00 body=36 status=ok
// SIG undefined FUN_144f92f00(void)

undefined8 FUN_144f92f00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_144f50bb0(param_1,local_res8);
  return param_1;
}



// FUNCTION 144f92f30 FUN_144f92f30 body=111 status=ok
// SIG undefined FUN_144f92f30(void)

undefined4 *
FUN_144f92f30(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dd6a0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f92fa0 FUN_144f92fa0 body=111 status=ok
// SIG undefined FUN_144f92fa0(void)

undefined4 *
FUN_144f92fa0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dcc40;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f93010 FUN_144f93010 body=111 status=ok
// SIG undefined FUN_144f93010(void)

undefined4 *
FUN_144f93010(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dcc78;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f93080 FUN_144f93080 body=36 status=ok
// SIG undefined FUN_144f93080(void)

undefined8 FUN_144f93080(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_144f50bb0(param_1,local_res8);
  return param_1;
}



// FUNCTION 144f930b0 FUN_144f930b0 body=32 status=ok
// SIG undefined FUN_144f930b0(void)

undefined8 FUN_144f930b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f930d0 FUN_144f930d0 body=256 status=ok
// SIG undefined FUN_144f930d0(void)

ulonglong FUN_144f930d0(ulonglong *param_1,undefined4 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  bVar1 = (byte)*param_1;
  if (-1 < (char)bVar1) {
    *param_2 = 1;
    return (ulonglong)bVar1;
  }
  uVar2 = *param_1;
  uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
  uVar5 = (uVar2 & 0xff00000000) >> 8;
  uVar6 = (uVar2 & 0xff000000) << 8;
  uVar7 = (uVar2 & 0xff0000) << 0x18;
  uVar8 = (uVar2 & 0xff00) << 0x28;
  uVar3 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8
  ;
  uVar10 = uVar3 | uVar2 << 0x38;
  uVar9 = (uint)(uVar10 >> 0x20);
  switch(bVar1 >> 3) {
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    *param_2 = 2;
    return (ulonglong)((ushort)(uVar10 >> 0x30) & 0x3fff);
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    *param_2 = 3;
    return (ulonglong)(uVar9 >> 8 & 0x1fffff);
  case 0x1c:
    *param_2 = 4;
    return (ulonglong)(uVar9 & 0x7ffffff);
  case 0x1d:
    *param_2 = 5;
    return uVar10 >> 0x18 & 0x7ffffffff;
  case 0x1e:
    *param_2 = 8;
    return uVar3 | uVar2 << 0x38 & 0x7ffffffffffffff;
  case 0x1f:
    if ((bVar1 & 7) == 0) {
      *param_2 = 6;
      return (uVar4 | uVar5 | uVar6 | uVar7 | uVar8) >> 0x10;
    }
    if ((bVar1 & 7) == 1) {
      uVar2 = *(ulonglong *)((longlong)param_1 + 1);
      *param_2 = 9;
      return uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    }
    *param_2 = 0;
  }
  return 0;
}



// FUNCTION 144f93210 FUN_144f93210 body=379 status=ok
// SIG undefined FUN_144f93210(void)

undefined8 FUN_144f93210(ulonglong *param_1,byte *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x80) {
    *param_2 = (byte)uVar1;
    return 1;
  }
  if (uVar1 < 0x4000) {
    *param_2 = (byte)(uVar1 >> 8) | 0x80;
    param_2[1] = (byte)*param_1;
    return 2;
  }
  if (uVar1 < 0x200000) {
    *param_2 = (byte)(uVar1 >> 0x10) | 0xc0;
    param_2[1] = *(byte *)((longlong)param_1 + 1);
    param_2[2] = (byte)*param_1;
    return 3;
  }
  if (uVar1 < 0x8000000) {
    *param_2 = (byte)(uVar1 >> 0x18) | 0xe0;
    param_2[1] = *(byte *)((longlong)param_1 + 2);
    param_2[2] = *(byte *)((longlong)param_1 + 1);
    param_2[3] = (byte)*param_1;
    return 4;
  }
  if (uVar1 < 0x800000000) {
    *param_2 = (byte)(uVar1 >> 0x20) | 0xe8;
    param_2[1] = *(byte *)((longlong)param_1 + 3);
    param_2[2] = *(byte *)((longlong)param_1 + 2);
    param_2[3] = *(byte *)((longlong)param_1 + 1);
    param_2[4] = (byte)*param_1;
    return 5;
  }
  if (uVar1 < 0x10000000000) {
    *param_2 = 0xf8;
    param_2[1] = *(byte *)((longlong)param_1 + 4);
    param_2[2] = *(byte *)((longlong)param_1 + 3);
    param_2[3] = *(byte *)((longlong)param_1 + 2);
    param_2[4] = *(byte *)((longlong)param_1 + 1);
    param_2[5] = (byte)*param_1;
    return 6;
  }
  if (uVar1 < 0x800000000000000) {
    *param_2 = (byte)(uVar1 >> 0x38) | 0xf0;
    param_2[1] = *(byte *)((longlong)param_1 + 6);
    param_2[2] = *(byte *)((longlong)param_1 + 5);
    param_2[3] = *(byte *)((longlong)param_1 + 4);
    param_2[4] = *(byte *)((longlong)param_1 + 3);
    param_2[5] = *(byte *)((longlong)param_1 + 2);
    param_2[6] = *(byte *)((longlong)param_1 + 1);
    param_2[7] = (byte)*param_1;
    return 8;
  }
  *param_2 = 0xf9;
  param_2[1] = *(byte *)((longlong)param_1 + 7);
  param_2[2] = *(byte *)((longlong)param_1 + 6);
  param_2[3] = *(byte *)((longlong)param_1 + 5);
  param_2[4] = *(byte *)((longlong)param_1 + 4);
  param_2[5] = *(byte *)((longlong)param_1 + 3);
  param_2[6] = *(byte *)((longlong)param_1 + 2);
  param_2[7] = *(byte *)((longlong)param_1 + 1);
  param_2[8] = (byte)*param_1;
  return 9;
}



// FUNCTION 144f93390 FUN_144f93390 body=19 status=ok
// SIG undefined FUN_144f93390(void)

undefined8 * FUN_144f93390(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0x1010001;
  return param_1;
}



// FUNCTION 144f933b0 FUN_144f933b0 body=676 status=ok
// SIG undefined FUN_144f933b0(void)

void FUN_144f933b0(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  short *psVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong local_res8;
  ulonglong local_res18 [2];
  
  puVar3 = (undefined4 *)FUN_144bef800(param_1,&local_res8);
  puVar9 = (ulonglong *)0x0;
  puVar5 = puVar9;
  if (((byte)*puVar3 & 0x1f) == 1) {
    puVar5 = param_1;
  }
  if (puVar5 == (ulonglong *)0x0) {
    puVar4 = (uint *)FUN_144bef800(param_1,&local_res8);
    puVar5 = puVar9;
    if ((*puVar4 & 0x1f) == 0) {
      puVar5 = param_1;
    }
    if (puVar5 == (ulonglong *)0x0) {
      uVar12 = *param_1;
      while ((uVar12 >> 0x14 & 1) == 0) {
        param_1 = (ulonglong *)param_1[1];
        uVar12 = *param_1;
      }
      if ((((uVar12 >> 0x14 & 1) == 0) ||
          (psVar6 = (short *)FUN_144befea0(param_1,0x100000), psVar6 == (short *)0x0)) ||
         (*psVar6 == 0)) {
        if (param_1[1] != 0) {
          FUN_144f933b0(param_1[1],param_2);
        }
        if ((*param_1 & 1) == 0) {
          puVar7 = (undefined8 *)FUN_144befe50(param_1[1],0x100000);
          puVar5 = puVar9;
          if (puVar7 != (undefined8 *)0x0) {
            puVar5 = (ulonglong *)*puVar7;
          }
          if ((((uint)*param_1 >> 0x14 & 1) != 0) &&
             (puVar7 = (undefined8 *)FUN_144befea0(param_1,0x100000), puVar7 != (undefined8 *)0x0))
          {
            puVar9 = (ulonglong *)*puVar7;
          }
          uVar8 = (ulonglong)((uint)((ulonglong)puVar5 >> 0x1c) & 0xf);
          uVar12 = ((ulonglong)puVar9 & 0xf0000000) >> 0x1c;
          if (uVar12 < uVar8) {
            uVar12 = uVar8;
          }
          local_res8 = uVar12 << 0x1c | (ulonglong)((uint)puVar5 & 0xfffffff);
          uVar2 = FUN_144f68ee0(&local_res8,*(undefined4 *)(param_2 + 4));
          uVar8 = (ulonglong)(uVar2 & 0xfff) << 0x10 | local_res8 & 0xfffffffff000ffff;
          uVar12 = local_res8 & 0xffff;
          local_res8 = uVar8;
          puVar9 = (ulonglong *)FUN_144befed0(param_1,0x100000);
          *puVar9 = (uint)uVar8 & 0xffff0000 | uVar12;
          return;
        }
        if ((param_1[1] == 0) && (((uint)*param_1 >> 0x17 & 1) == 0)) {
          puVar3 = (undefined4 *)FUN_144bef800(param_1,&local_res8);
          puVar5 = puVar9;
          if (((byte)*puVar3 & 0x1f) == 8) {
            puVar5 = param_1;
          }
          puVar7 = (undefined8 *)FUN_144befe50(puVar5,1);
          puVar13 = puVar9;
          if (puVar7 != (undefined8 *)0x0) {
            puVar13 = (ulonglong *)*puVar7;
          }
          FUN_144beff00(puVar5,&local_res8);
          FUN_144f933b0(local_res8,param_2);
          puVar7 = (undefined8 *)FUN_144befe50(param_1,0x100000);
          if (puVar7 == (undefined8 *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (uint)*puVar7;
          }
          local_res18[0] = (ulonglong)uVar2;
          puVar7 = (undefined8 *)FUN_144befe50(local_res8,0x100000);
          if (puVar7 != (undefined8 *)0x0) {
            puVar9 = (ulonglong *)*puVar7;
          }
          iVar1 = *(int *)(param_2 + 0xc);
          iVar11 = ((uint)puVar9 & 0xffff) * (int)((ulonglong)puVar13 >> 8);
          uVar2 = FUN_144f68ee0(local_res18,*(undefined4 *)(param_2 + 4));
          uVar10 = (uint)((ulonglong)puVar9 >> 0x10) & 0xfff;
          if ((int)uVar2 < (int)uVar10) {
            uVar2 = uVar10;
          }
          if (iVar1 < iVar11) {
            iVar1 = iVar11;
          }
          FUN_144f69180(param_1,iVar1,uVar2);
          return;
        }
        FUN_144f93850(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 144f93660 FUN_144f93660 body=44 status=ok
// SIG undefined FUN_144f93660(void)

void FUN_144f93660(undefined8 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_18 = 8;
  local_14 = 4;
  local_10 = 0x1010000;
  FUN_144f933b0(param_1,&local_18);
  return;
}



// FUNCTION 144f93690 FUN_144f93690 body=434 status=ok
// SIG undefined FUN_144f93690(void)

int FUN_144f93690(uint *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  
  if (param_1 != (uint *)0x0) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)FUN_144bef800(param_1,&local_res8);
      puVar8 = (uint *)0x0;
      if (((byte)*puVar5 & 0x1f) == 8) {
        puVar8 = param_1;
      }
      if (puVar8 != (uint *)0x0) {
        puVar6 = (undefined8 *)FUN_144befe50(puVar8,1);
        puVar10 = (uint *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          puVar10 = (uint *)*puVar6;
        }
        iVar2 = (int)((ulonglong)puVar10 >> 8);
        if (iVar2 != 0) {
          FUN_144beff00(puVar8,&local_res8);
          iVar4 = FUN_144beec90(local_res8);
          return iVar4 * iVar2;
        }
      }
      if (((((*param_1 >> 0x17 & 1) != 0) &&
           (puVar6 = (undefined8 *)FUN_144befea0(param_1,0x800000), puVar6 != (undefined8 *)0x0)) &&
          (psVar1 = (short *)*puVar6, psVar1 != (short *)0x0)) && (*psVar1 != 0)) {
        local_res8 = *(undefined8 *)(psVar1 + (longlong)*psVar1 * 4);
        iVar4 = FUN_144beec90();
        iVar2 = FUN_144bf0700(&local_res8);
        return iVar2 + iVar4;
      }
      if ((((*param_1 >> 0xe & 1) != 0) &&
          (plVar7 = (longlong *)FUN_144befea0(param_1,0x4000), plVar7 != (longlong *)0x0)) &&
         (((longlong *)*plVar7 != (longlong *)0x0 &&
          (iVar2 = (int)((*(longlong *)*plVar7 << 4) >> 4), iVar2 != 0)))) {
        if (*(longlong *)(param_1 + 2) != 0) {
          iVar4 = FUN_144f93690(*(longlong *)(param_1 + 2),param_2);
        }
        uVar9 = param_2 + -1 + iVar4 & -param_2;
        puVar8 = (uint *)FUN_144b45d50(param_1,&local_res8);
        uVar3 = uVar9 + param_2;
        if ((*puVar8 >> 7 & 1) == 0) {
          uVar3 = uVar9;
        }
        return uVar3 + iVar2 * param_2;
      }
      puVar8 = (uint *)FUN_144b45d50(param_1,local_res18);
      if ((*puVar8 >> 7 & 1) != 0) {
        if (*(longlong *)(param_1 + 2) != 0) {
          iVar4 = FUN_144f93690(*(longlong *)(param_1 + 2),param_2);
        }
        return (param_2 + -1 + iVar4 & -param_2) + param_2;
      }
      param_1 = *(uint **)(param_1 + 2);
    } while (param_1 != (uint *)0x0);
  }
  return 0;
}



// FUNCTION 144f93850 FUN_144f93850 body=1439 status=ok
// SIG undefined FUN_144f93850(void)

void FUN_144f93850(uint *param_1,int *param_2)

{
  short *psVar1;
  ushort uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  short *psVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong lVar20;
  ushort *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  int local_res18;
  ulonglong local_res20;
  undefined8 local_280;
  ulonglong local_278 [2];
  undefined8 *local_268;
  undefined8 *local_260;
  undefined1 local_248 [520];
  
  puVar3 = *(ulonglong **)(param_1 + 2);
  local_res18 = 0;
  iVar9 = 1;
  uVar8 = 0;
  if (puVar3 != (ulonglong *)0x0) {
    uVar8 = FUN_144beec90(puVar3);
    iVar9 = FUN_144beecf0();
    if ((*(char *)((longlong)param_2 + 0xb) == '\0') || (uVar8 != 1)) {
      if (uVar8 != 0) {
LAB_144f93912:
        if ((char)param_2[2] == '\0') {
          if ((*(char *)((longlong)param_2 + 9) != '\0') ||
             (*(char *)((longlong)param_2 + 10) != '\0')) {
            iVar11 = param_2[1];
            iVar12 = 0;
            puVar17 = puVar3;
            do {
              uVar15 = *puVar17;
              if ((uVar15 >> 0x14 & 1) != 0) {
                puVar14 = (ulonglong *)FUN_144befea0();
                uVar15 = (ulonglong)(byte)*puVar17;
                if ((puVar14 != (ulonglong *)0x0) && (uVar4 = *puVar14, uVar4 != 0)) {
                  iVar22 = 0;
                  if ((uVar4 & 0xf0000000) != 0) {
                    if ((uVar4 & 0xf0000000) == 0xf0000000) {
                      iVar22 = iVar11 * 4;
                    }
                    else {
                      iVar22 = 1 << ((byte)(uVar4 >> 0x1c) & 0xf);
                    }
                  }
                  if (iVar12 < iVar22) {
                    iVar12 = iVar22;
                  }
                }
              }
            } while (((uVar15 & 1) == 0) &&
                    (puVar17 = (ulonglong *)puVar17[1], puVar17 != (ulonglong *)0x0));
            if (iVar9 == iVar12) {
              iVar11 = *param_2;
              iVar22 = param_2[1];
              FUN_144bf0830(&local_268,puVar3,0);
              iVar24 = 1;
              while ((puVar13 = local_268 + 1, local_268 + 1 < local_260 ||
                     (cVar7 = FUN_144bf0850(&local_268), puVar17 = puVar3, puVar13 = local_268,
                     cVar7 != '\0'))) {
                local_268 = puVar13;
                pbVar16 = (byte *)FUN_144bf04d0(local_268,&local_res20);
                if ((*pbVar16 & 0x20) != 0) {
                  if (((*(uint *)*local_268 >> 0x14 & 1) == 0) ||
                     (puVar17 = (ulonglong *)FUN_144befea0((uint *)*local_268,0x100000),
                     puVar17 == (ulonglong *)0x0)) {
                    local_278[0] = 0;
                  }
                  else {
                    local_278[0] = *puVar17;
                  }
                  local_278[0] = local_278[0] & 0xffffffff;
                  iVar10 = FUN_144f68ee0(local_278,iVar22);
                  if (iVar24 < iVar10) {
                    iVar24 = iVar10;
                  }
                }
              }
              do {
                puVar18 = (uint *)FUN_144b45d50(puVar17,&local_280);
                if ((*puVar18 >> 7 & 1) != 0) {
                  iVar22 = iVar11;
                  if (iVar11 < iVar24) {
                    iVar22 = iVar24;
                  }
                  break;
                }
                puVar14 = puVar17 + 1;
                puVar17 = (ulonglong *)*puVar14;
                iVar22 = iVar24;
              } while ((ulonglong *)*puVar14 != (ulonglong *)0x0);
              if ((iVar22 < iVar12) &&
                 (uVar23 = FUN_144f93690(puVar3,*param_2), iVar9 = iVar22, local_res18 = iVar12,
                 (int)uVar23 < (int)uVar8)) {
                uVar8 = uVar23;
              }
            }
            else if (((*(char *)((longlong)param_2 + 9) != '\0') && (iVar12 == 0)) && (7 < iVar9)) {
              iVar11 = FUN_144f93690(puVar3,*param_2);
              uVar23 = iVar11 + 7U & 0xfffffff8;
              if ((int)uVar23 < (int)uVar8) {
                uVar8 = uVar23;
              }
            }
          }
        }
        else {
          uVar23 = FUN_144f93690(puVar3,*param_2);
          if ((int)uVar23 < (int)uVar8) {
            uVar8 = uVar23;
          }
        }
      }
    }
    else {
      uVar8 = 0;
      puVar17 = puVar3;
      do {
        if ((((((uint)*puVar17 >> 0x17 & 1) != 0) &&
             (puVar13 = (undefined8 *)FUN_144befea0(puVar17,0x800000), puVar13 != (undefined8 *)0x0)
             ) && ((short *)*puVar13 != (short *)0x0)) && (*(short *)*puVar13 != 0)) {
          uVar8 = 1;
          goto LAB_144f93912;
        }
        puVar17 = (ulonglong *)puVar17[1];
      } while (puVar17 != (ulonglong *)0x0);
    }
  }
  iVar11 = param_2[1];
  if (((*param_1 >> 0x14 & 1) == 0) ||
     (puVar17 = (ulonglong *)FUN_144befea0(param_1,0x100000), puVar17 == (ulonglong *)0x0)) {
    local_res20 = 0;
  }
  else {
    local_res20 = *puVar17;
  }
  local_res20 = local_res20 & 0xffffffff;
  iVar11 = FUN_144f68ee0(&local_res20,iVar11);
  if (iVar9 < iVar11) {
    iVar9 = iVar11;
  }
  puVar18 = (uint *)FUN_144b45d50(param_1,&local_res20);
  iVar11 = iVar9;
  if ((*puVar18 >> 7 & 1) != 0) {
    iVar12 = *param_2;
    iVar11 = iVar12;
    if (iVar12 <= iVar9) {
      iVar11 = iVar9;
    }
    if ((int)uVar8 % iVar11 != 0) {
      uVar8 = uVar8 + (iVar11 - (int)uVar8 % iVar11);
    }
    uVar8 = uVar8 + iVar12;
  }
  if ((((*param_1 >> 0xe & 1) != 0) &&
      (plVar19 = (longlong *)FUN_144befea0(param_1,0x4000), plVar19 != (longlong *)0x0)) &&
     (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)) {
    plVar25 = plVar19 + 1;
    iVar9 = (int)((*plVar19 << 4) >> 4);
    lVar26 = (longlong)iVar9;
    if (0 < iVar9) {
      do {
        lVar20 = *plVar25;
        iVar9 = FUN_144beec90(lVar20);
        iVar12 = FUN_144beecf0(lVar20);
        if (iVar11 < iVar12) {
          iVar11 = iVar12;
        }
        if ((int)uVar8 % iVar12 != 0) {
          uVar8 = uVar8 + (iVar12 - (int)uVar8 % iVar12);
        }
        lVar20 = (longlong)(int)uVar8;
        uVar8 = uVar8 + iVar9;
        plVar25[1] = lVar20;
        plVar25 = plVar25 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
  }
  if ((((*param_1 >> 0x17 & 1) != 0) &&
      (puVar13 = (undefined8 *)FUN_144befea0(param_1,0x800000), puVar13 != (undefined8 *)0x0)) &&
     (psVar5 = (short *)*puVar13, psVar5 != (short *)0x0)) {
    psVar1 = psVar5 + ((longlong)*psVar5 + 1) * 4;
    while (psVar5 = psVar5 + 4, psVar5 != psVar1) {
      puVar18 = *(uint **)psVar5;
      FUN_144f933b0(puVar18,param_2);
      iVar9 = param_2[1];
      iVar12 = FUN_144beecf0(puVar18);
      if (((*puVar18 >> 0x14 & 1) == 0) ||
         (puVar17 = (ulonglong *)FUN_144befea0(puVar18,0x100000), puVar17 == (ulonglong *)0x0)) {
        local_278[0] = 0;
      }
      else {
        local_278[0] = *puVar17;
      }
      local_278[0] = local_278[0] & 0xffffffff;
      iVar9 = FUN_144f68ee0(local_278,iVar9);
      if (iVar12 < iVar9) {
        iVar12 = iVar9;
      }
      iVar9 = iVar11;
      if ((iVar12 != 0) &&
         (uVar8 = (uVar8 - 1) + iVar12 & -iVar12, iVar9 = iVar12, iVar12 <= iVar11)) {
        iVar9 = iVar11;
      }
      local_280 = *(undefined8 *)psVar5;
      puVar21 = (ushort *)FUN_144bf04d0(&local_280,&local_res20);
      uVar2 = *puVar21;
      puVar17 = (ulonglong *)FUN_144befed0(local_280,0x20000);
      *puVar17 = (ulonglong)uVar2 << 0x10 | (ulonglong)(uVar8 & 0xffff);
      iVar11 = FUN_144beec90(puVar18);
      uVar8 = uVar8 + iVar11;
      iVar11 = iVar9;
    }
  }
  uVar23 = param_2[3];
  if (param_2[3] < (int)uVar8) {
    uVar23 = uVar8;
  }
  if (iVar11 < local_res18) {
    iVar11 = local_res18;
  }
  if ((iVar11 != 0) && ((int)uVar23 % iVar11 != 0)) {
    uVar23 = uVar23 + (iVar11 - (int)uVar23 % iVar11);
  }
  if ((int)uVar23 < 1) {
    uVar23 = 1;
  }
  if ((puVar3 != (ulonglong *)0x0) && (iVar9 = FUN_144beec90(puVar3), (int)uVar23 < iVar9)) {
    FUN_144bde670(local_278,local_248,0x200);
    FUN_144be6160(local_278,
                  "Child\'s final size is less than parent\'s! (Do you have a trailing unreflected field?)"
                 );
    iVar9 = FUN_144bfc110(0x71544192,local_248,"Reflect\\Builder\\hkRecordLayout.cpp",0x140);
    if (iVar9 != 0) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_144bde6e0(local_278);
  }
  FUN_144f69180(param_1,uVar23,iVar11);
  return;
}



// FUNCTION 144f93df0 FUN_144f93df0 body=470 status=ok
// SIG undefined FUN_144f93df0(void)

undefined4 *
FUN_144f93df0(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong local_38 [2];
  
  puVar7 = (ulonglong *)FUN_144befe50(param_4,1);
  uVar8 = 0;
  uVar6 = 0;
  uVar10 = uVar8;
  if (puVar7 != (ulonglong *)0x0) {
    uVar10 = *puVar7;
  }
  iVar11 = (int)(uVar10 >> 8);
  if (iVar11 == 0) {
    lVar9 = (longlong)*param_3;
    if (*param_3 != 0) {
      lVar1 = **(longlong **)(param_1 + 0x10);
      if (*(char *)(lVar1 + 0x10 + lVar9 * 0x18) == '\x01') {
        iVar11 = *(int *)(lVar1 + 0x14 + lVar9 * 0x18);
      }
      else {
        iVar11 = -1;
      }
      lVar2 = *(longlong *)(lVar1 + 8 + lVar9 * 0x18);
      uVar3 = *(undefined8 *)(lVar1 + lVar9 * 0x18);
      if (lVar2 != 0) {
        uVar8 = FUN_144befdb0(lVar2);
      }
      if ((uVar8 & 1) != 0) {
        FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
      }
      iVar5 = -iVar11;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      uVar10 = 0;
      if (lVar2 != 0) {
        uVar6 = FUN_144beec90(lVar2);
        uVar10 = FUN_144befdb0(lVar2);
        if ((uVar10 & 1) != 0) {
          FUN_144be6b20(uVar10 & 0xfffffffffffffffe);
        }
      }
      *param_5 = uVar3;
      param_5[1] = lVar2;
      *(int *)(param_5 + 2) = iVar5;
      *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
      uVar4 = param_5[3];
      param_5[3] = uVar10;
      if ((uVar4 & 1) != 0) {
        FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
      }
      *param_2 = 0;
      if ((uVar8 & 1) == 0) {
        return param_2;
      }
      FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
      return param_2;
    }
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    uVar10 = param_5[3];
    param_5[3] = 0;
  }
  else {
    FUN_144beff00(param_4,local_38);
    uVar6 = 0;
    if (local_38[0] != 0) {
      uVar6 = FUN_144beec90(local_38[0]);
      uVar8 = FUN_144befdb0(local_38[0]);
      if ((uVar8 & 1) != 0) {
        FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
      }
    }
    *param_5 = param_3;
    param_5[1] = local_38[0];
    *(int *)(param_5 + 2) = iVar11;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
    uVar10 = param_5[3];
    param_5[3] = uVar8;
  }
  if ((uVar10 & 1) != 0) {
    FUN_144be6b30(uVar10 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f93fd0 FUN_144f93fd0 body=10 status=ok
// SIG undefined FUN_144f93fd0(void)

undefined4 * FUN_144f93fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f93fe0 FUN_144f93fe0 body=87 status=ok
// SIG undefined FUN_144f93fe0(void)

undefined8 FUN_144f93fe0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f94040 FUN_144f94040 body=10 status=ok
// SIG undefined FUN_144f94040(void)

undefined4 * FUN_144f94040(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f94050 FUN_144f94050 body=218 status=ok
// SIG undefined FUN_144f94050(void)

undefined4 *
FUN_144f94050(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar5 = 0;
  lVar2 = **(longlong **)(param_1 + 0x10);
  uVar4 = 0;
  if (*param_3 < *(uint *)(*(longlong **)(param_1 + 0x10) + 1)) {
    uVar4 = *param_3;
  }
  puVar1 = (undefined8 *)(lVar2 + (longlong)(int)uVar4 * 0x18);
  if (*(char *)(lVar2 + 0x10 + (longlong)(int)uVar4 * 0x18) == '\x02') {
    lVar6 = *(longlong *)(lVar2 + 8 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 0x18);
    uVar7 = *(undefined8 *)(lVar2 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 0x18);
    if (lVar6 != 0) {
      uVar5 = FUN_144befdb0(lVar6);
    }
  }
  else {
    lVar6 = puVar1[1];
    uVar7 = *puVar1;
    if (lVar6 != 0) {
      uVar5 = FUN_144befdb0(lVar6);
    }
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
  }
  *param_5 = uVar7;
  param_5[1] = lVar6;
  uVar3 = param_5[2];
  param_5[2] = uVar5;
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f94130 FUN_144f94130 body=143 status=ok
// SIG undefined FUN_144f94130(void)

longlong FUN_144f94130(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar6 = **(longlong **)(param_1 + 0x10);
  uVar3 = 0;
  if (*param_2 < *(uint *)(*(longlong **)(param_1 + 0x10) + 1)) {
    uVar3 = *param_2;
  }
  plVar1 = (longlong *)(lVar6 + (longlong)(int)uVar3 * 0x18);
  if (*(char *)(lVar6 + 0x10 + (longlong)(int)uVar3 * 0x18) == '\x02') {
    lVar5 = *(longlong *)(lVar6 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 0x18);
    if (lVar5 == 0) {
      return 0;
    }
    lVar6 = *(longlong *)(lVar6 + 8 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 0x18);
  }
  else {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      return 0;
    }
    lVar6 = plVar1[1];
  }
  if (((lVar6 != 0) && (cVar2 = FUN_144b45dd0(lVar6,param_4), cVar2 != '\0')) &&
     (puVar4 = (uint *)FUN_144b45d50(lVar6,local_res8), (*puVar4 >> 3 & 1) == 0)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 144f941c0 FUN_144f941c0 body=54 status=ok
// SIG undefined FUN_144f941c0(void)

undefined8 FUN_144f941c0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x10);
  uVar2 = 0;
  if (*param_2 < *(uint *)(*(longlong **)(param_1 + 0x10) + 1)) {
    uVar2 = *param_2;
  }
  lVar3 = (longlong)(int)uVar2;
  if (*(char *)(lVar1 + 0x10 + lVar3 * 0x18) == '\x02') {
    return *(undefined8 *)(lVar1 + (longlong)*(int *)(lVar1 + 0x14 + lVar3 * 0x18) * 0x18);
  }
  return *(undefined8 *)(lVar1 + lVar3 * 0x18);
}



// FUNCTION 144f94200 FUN_144f94200 body=87 status=ok
// SIG undefined FUN_144f94200(void)

undefined8 FUN_144f94200(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f94260 FUN_144f94260 body=10 status=ok
// SIG undefined FUN_144f94260(void)

undefined4 * FUN_144f94260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f94270 FUN_144f94270 body=174 status=ok
// SIG undefined FUN_144f94270(void)

undefined4 *
FUN_144f94270(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = *param_3;
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar1 * 0x18);
    if (*(longlong *)(**(longlong **)(param_1 + 0x10) + 8 + (longlong)iVar1 * 0x18) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144befdb0();
    }
    if ((uVar3 & 1) == 0) {
      *param_5 = uVar2;
    }
    else {
      FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      *param_5 = uVar2;
      FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_5 = 0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f94320 FUN_144f94320 body=87 status=ok
// SIG undefined FUN_144f94320(void)

undefined8 FUN_144f94320(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f94380 FUN_144f94380 body=211 status=ok
// SIG undefined FUN_144f94380(void)

undefined8 * FUN_144f94380(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_144f87d70();
  puVar1 = param_1 + 3;
  *param_1 = hkSerialize::Detail::IndexedBundle::vftable;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_144be6ac0(param_1 + 5);
  param_1[7] = puVar1;
  param_1[5] = hkSerialize::Detail::IndexedArrayImpl::vftable;
  FUN_144be6ac0(param_1 + 8);
  param_1[10] = puVar1;
  param_1[8] = hkSerialize::Detail::IndexedPointerImpl::vftable;
  FUN_144be6ac0(param_1 + 0xb);
  param_1[0xd] = puVar1;
  param_1[0xb] = hkSerialize::Detail::IndexedStringImpl::vftable;
  iVar2 = *(int *)(param_1 + 2) + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) < iVar2) {
    FUN_144bf0cc0(param_1 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  puVar1 = (undefined8 *)(param_1[1] + (longlong)*(int *)(param_1 + 2) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  *(int *)(param_1 + 2) = iVar2;
  return param_1;
}



// FUNCTION 144f94460 FUN_144f94460 body=229 status=ok
// SIG undefined FUN_144f94460(void)

ulonglong * FUN_144f94460(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong uStack_10;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) < 2) {
    puVar5 = &local_20;
    local_18 = 0;
    uStack_10 = 0;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    local_30 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    if (local_30 != 0) {
      uVar4 = FUN_144befdb0();
    }
    local_28 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    }
    puVar5 = &local_38;
    bVar3 = true;
    bVar2 = false;
    uVar4 = uVar1;
  }
  param_2[1] = puVar5[1];
  uVar1 = puVar5[2];
  puVar5[2] = 0;
  *param_2 = uVar4;
  param_2[2] = uVar1;
  *puVar5 = 0;
  puVar5[1] = 0;
  if ((bVar2) && ((uStack_10 & 1) != 0)) {
    FUN_144be6b30(uStack_10 & 0xfffffffffffffffe);
  }
  if ((bVar3) && ((local_28 & 1) != 0)) {
    FUN_144be6b30(local_28 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144f94550 FUN_144f94550 body=241 status=ok
// SIG undefined FUN_144f94550(void)

int FUN_144f94550(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if ((longlong *)(param_1 + 0x18) != param_2) {
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x20);
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144f95250(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar8 = (undefined8 *)*param_2;
    iVar3 = iVar2;
    if ((int)param_2[1] < iVar2) {
      iVar3 = (int)param_2[1];
    }
    if ((puVar8 != puVar9) && (lVar6 = (longlong)iVar3, 0 < iVar3)) {
      puVar5 = puVar8;
      do {
        puVar1 = (undefined8 *)(((longlong)puVar9 - (longlong)puVar8) + (longlong)puVar5);
        uVar4 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar4;
        puVar5[2] = *(undefined8 *)
                     (((longlong)puVar9 - (longlong)puVar8) + -8 + (longlong)(puVar5 + 3));
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 3;
      } while (lVar6 != 0);
    }
    puVar9 = puVar9 + (longlong)iVar3 * 3;
    if (0 < iVar2 - iVar3) {
      uVar7 = (ulonglong)(uint)(iVar2 - iVar3);
      puVar8 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x18);
      do {
        if (puVar8 != (undefined8 *)0x0) {
          uVar4 = puVar9[1];
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar5 = puVar9 + 2;
          puVar9 = puVar9 + 3;
          puVar8[2] = *puVar5;
        }
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + 3;
      } while (uVar7 != 0);
    }
    *(int *)(param_2 + 1) = iVar2;
    return iVar2;
  }
  return (int)param_2[1];
}



// FUNCTION 144f94650 FUN_144f94650 body=154 status=ok
// SIG undefined FUN_144f94650(void)

longlong * FUN_144f94650(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar4 = 0;
  if (*(uint *)*param_3 < *(uint *)(*(longlong *)(param_1 + 0x50) + 8)) {
    uVar4 = *(uint *)*param_3;
  }
  plVar2 = (longlong *)(lVar1 + (longlong)(int)uVar4 * 0x18);
  if (*(char *)(lVar1 + 0x10 + (longlong)(int)uVar4 * 0x18) != '\x02') {
    if ((*plVar2 != 0) || (*(int *)((longlong)plVar2 + 0x14) < 1)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return param_2;
    }
    plVar2 = (longlong *)(lVar1 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 0x18);
  }
  lVar1 = plVar2[1];
  *param_2 = *plVar2;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    uVar3 = FUN_144befdb0();
  }
  param_2[2] = uVar3;
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  return param_2;
}



// FUNCTION 144f946f0 FUN_144f946f0 body=87 status=ok
// SIG undefined FUN_144f946f0(void)

void FUN_144f946f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return;
}



// FUNCTION 144f94750 FUN_144f94750 body=186 status=ok
// SIG undefined FUN_144f94750(void)

longlong FUN_144f94750(longlong param_1,ulonglong param_2)

{
  FUN_144be6ae0(param_1 + 0x58);
  FUN_144be6ae0(param_1 + 0x40);
  FUN_144be6ae0(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_144f87d90(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 144f94810 FUN_144f94810 body=55 status=ok
// SIG undefined FUN_144f94810(void)

undefined8 * FUN_144f94810(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 144f94850 thunk_FUN_144f94e00 body=5 status=ok
// SIG undefined thunk_FUN_144f94e00(void)

void thunk_FUN_144f94e00(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 6 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar4[-7] = 0;
      if ((-1 < (int)puVar4[-6]) && (*(longlong *)(puVar4 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -9),
                   (ulonglong)(puVar4[-6] & 0x7fffffff) << 3);
      }
      puVar1 = puVar4 + -0xb;
      *(undefined8 *)(puVar4 + -9) = 0;
      puVar4[-6] = 0x80000000;
      puVar4 = puVar4 + -6;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f94860 FUN_144f94860 body=184 status=ok
// SIG undefined FUN_144f94860(void)

void FUN_144f94860(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  lVar4 = FUN_144f94fe0(param_1,local_res10);
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 4);
    lVar6 = (longlong)iVar2;
    uVar3 = (uint)(lVar4 - param_1[2] >> 3);
    if (-1 < iVar2) {
      puVar5 = *(undefined8 **)(*param_1 + 8 + lVar6 * 0x18);
      puVar1 = puVar5 + *(int *)(*param_1 + 0x10 + lVar6 * 0x18);
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        *(undefined8 *)*puVar5 = param_3;
      }
      if ((*(uint *)(param_1 + 3) < uVar3) ||
         (lVar4 = param_1[2] + (longlong)(int)uVar3 * 8,
         *(int *)(param_1[2] + 4 + (longlong)(int)uVar3 * 8) != iVar2)) {
        lVar4 = FUN_144f94fe0(param_1,*param_1 + lVar6 * 0x18);
      }
      FUN_144f94c50(param_1,lVar4);
    }
  }
  return;
}



// FUNCTION 144f94920 FUN_144f94920 body=501 status=ok
// SIG undefined FUN_144f94920(void)

void FUN_144f94920(undefined8 param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0 < *param_3) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    FUN_144f94b20(local_38,param_2 + 2,*param_3,&local_38);
  }
  uVar9 = 0;
  if (0 < param_3[1]) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uVar3 = uVar9;
    if ((*param_2 & 2) != 0) {
      uVar3 = FUN_144befea0(param_2,2);
    }
    FUN_144f94b20(param_1,uVar3,param_3[1],&local_38);
  }
  if (((((*param_2 >> 0x17 & 1) != 0) &&
       (puVar4 = (undefined8 *)FUN_144befea0(param_2,0x800000), puVar4 != (undefined8 *)0x0)) &&
      (plVar1 = (longlong *)*puVar4, plVar1 != (longlong *)0x0)) &&
     (uVar3 = uVar9, uVar10 = uVar9, plVar2 = plVar1, 0 < (short)*plVar1)) {
    do {
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      FUN_144f94b20(param_1,plVar2[1] + 8,*(undefined4 *)(*(longlong *)(param_3 + 2) + uVar10),
                    &local_38);
      uVar8 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar8;
      uVar10 = uVar10 + 4;
      plVar2 = plVar2 + 1;
    } while ((int)uVar8 < (int)(short)*plVar1);
  }
  if ((param_3[0x28] != 0) &&
     (lVar5 = FUN_144bef4c0(param_2), uVar3 = uVar9, uVar10 = uVar9, 0 < param_3[0x28])) {
    do {
      if (**(char **)(lVar5 + 0x18) == 't') {
        local_38 = *param_4;
        uStack_34 = param_4[1];
        uStack_30 = param_4[2];
        uStack_2c = param_4[3];
        FUN_144f94b20(param_1,lVar5 + 0x10,*(undefined4 *)(*(longlong *)(param_3 + 0x26) + uVar10),
                      &local_38);
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar10 = uVar10 + 4;
      }
      lVar5 = lVar5 + 0x10;
    } while ((int)uVar3 < param_3[0x28]);
  }
  iVar7 = param_3[0x4c];
  if (iVar7 != 0) {
    uVar3 = uVar9;
    if ((*param_2 >> 0xe & 1) != 0) {
      puVar6 = (ulonglong *)FUN_144befea0(param_2,0x4000);
      iVar7 = param_3[0x4c];
      if (puVar6 != (ulonglong *)0x0) {
        uVar3 = *puVar6;
      }
    }
    uVar10 = uVar9;
    if (0 < iVar7) {
      do {
        local_38 = *param_4;
        uStack_34 = param_4[1];
        uStack_30 = param_4[2];
        uStack_2c = param_4[3];
        FUN_144f94b20(param_1,(longlong)(int)uVar9 * 0x10 + uVar3 + 8,
                      *(undefined4 *)(*(longlong *)(param_3 + 0x4a) + uVar10),&local_38);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 4;
      } while ((int)uVar8 < param_3[0x4c]);
    }
  }
  return;
}



// FUNCTION 144f94b20 FUN_144f94b20 body=300 status=ok
// SIG undefined FUN_144f94b20(void)

void FUN_144f94b20(longlong *param_1,longlong *param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res18 [4];
  int local_28 [4];
  
  if (param_3 == -1) {
    *param_2 = (longlong)&DAT_14c6ddac0;
    return;
  }
  if ((param_3 < (int)(param_4[1] - *param_4 >> 3)) &&
     (lVar3 = *(longlong *)(*param_4 + (longlong)param_3 * 8), lVar3 != 0)) {
    *param_2 = lVar3;
    return;
  }
  *param_2 = (longlong)&DAT_14c6ddac0;
  local_res18[0] = param_3;
  FUN_144f95050(param_1,local_28,local_res18);
  if (local_28[0] == (int)param_1[1]) {
    iVar6 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_144f95310(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    piVar1 = (int *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_3;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = -0x80000000;
    }
    *(int *)(param_1 + 1) = iVar6;
  }
  lVar5 = (longlong)local_28[0];
  lVar4 = *param_1;
  iVar6 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18) + 1;
  lVar3 = lVar4 + lVar5 * 0x18;
  if ((int)(*(uint *)(lVar4 + 0x14 + lVar5 * 0x18) & 0x7fffffff) < iVar6) {
    FUN_144f95160(lVar3 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)*(int *)(lVar3 + 0x10) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
  }
  *(int *)(lVar3 + 0x10) = iVar6;
  return;
}



// FUNCTION 144f94c50 FUN_144f94c50 body=424 status=ok
// SIG undefined FUN_144f94c50(void)

void FUN_144f94c50(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144f94fe0(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0x18);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  lVar6 = *param_1 + (longlong)(int)uVar3 * 0x18;
  *(undefined4 *)(lVar6 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(lVar6 + 0x14)) && (*(longlong *)(lVar6 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar6 + 8),
               (ulonglong)(*(uint *)(lVar6 + 0x14) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x14) = 0x80000000;
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    lVar6 = *param_1 + ((longlong)(int)lVar6 + -1) * 0x18;
    lVar1 = *param_1 + (longlong)(int)uVar3 * 0x18;
    if (lVar1 != lVar6) {
      if (lVar1 != 0) {
        FUN_144f94f70(lVar1,lVar6);
      }
      *(undefined4 *)(lVar6 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar6 + 0x14)) && (*(longlong *)(lVar6 + 8) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar6 + 8),
                   (ulonglong)(*(uint *)(lVar6 + 0x14) & 0x7fffffff) << 3);
      }
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined4 *)(lVar6 + 0x14) = 0x80000000;
    }
  }
  lVar6 = param_1[2];
  uVar8 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar8;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar8 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar8 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar8;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144f94e00 FUN_144f94e00 body=249 status=ok
// SIG undefined FUN_144f94e00(void)

void FUN_144f94e00(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 6 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar4[-7] = 0;
      if ((-1 < (int)puVar4[-6]) && (*(longlong *)(puVar4 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -9),
                   (ulonglong)(puVar4[-6] & 0x7fffffff) << 3);
      }
      puVar1 = puVar4 + -0xb;
      *(undefined8 *)(puVar4 + -9) = 0;
      puVar4[-6] = 0x80000000;
      puVar4 = puVar4 + -6;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f94f00 FUN_144f94f00 body=103 status=ok
// SIG undefined FUN_144f94f00(void)

void FUN_144f94f00(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144f94f70 FUN_144f94f70 body=102 status=ok
// SIG undefined FUN_144f94f70(void)

undefined4 * FUN_144f94f70(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  param_1[5] = 0x80000000;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  FUN_144f94f00(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  return param_1;
}



// FUNCTION 144f94fe0 FUN_144f94fe0 body=105 status=ok
// SIG undefined FUN_144f94fe0(void)

uint * FUN_144f94fe0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0x18) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144f95050 FUN_144f95050 body=257 status=ok
// SIG undefined FUN_144f95050(void)

uint * FUN_144f95050(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f95129:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x18) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144f95129;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f95160 FUN_144f95160 body=235 status=ok
// SIG undefined FUN_144f95160(void)

void FUN_144f95160(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144f95250 FUN_144f95250 body=190 status=ok
// SIG undefined FUN_144f95250(void)

void FUN_144f95250(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar6 + 4);
      }
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 6;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144f95310 FUN_144f95310 body=516 status=ok
// SIG undefined FUN_144f95310(void)

ulonglong FUN_144f95310(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res18;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar7 * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x18);
  piVar5 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = piVar5 + 5;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar3 + 0x14);
    uVar8 = (ulonglong)uVar1;
    piVar9 = piVar4;
    do {
      if (piVar6 + -5 != (int *)0x0) {
        piVar6[-5] = *piVar5;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        FUN_144f94f00(piVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar9 + -3);
        piVar6[-1] = piVar9[-1];
        *piVar6 = *piVar9;
        piVar9[-3] = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        piVar9[0] = 0;
      }
      piVar6 = piVar6 + 6;
      piVar5 = piVar5 + 6;
      piVar9 = piVar9 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)uVar1;
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(longlong *)(piVar4 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar4 = -0x80000000;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      piVar4 = piVar4 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar10 * 0x18 + 0x18;
  uVar11 = uVar10;
  if (uVar8 <= local_res18) {
    uVar11 = uVar10 + 1;
    if (uVar8 <= local_res18 - 0x18) {
      uVar10 = (local_res18 - 0x18) + uVar10 * -0x18;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar11 = uVar11 + uVar10 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x18);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 144f95520 FUN_144f95520 body=26 status=ok
// SIG undefined FUN_144f95520(void)

void FUN_144f95520(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144f95f70();
  *(undefined4 *)(param_1 + 200) = uVar1;
  return;
}



// FUNCTION 144f95540 FUN_144f95540 body=156 status=ok
// SIG undefined FUN_144f95540(void)

undefined8 * FUN_144f95540(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkXmlStreamParser::vftable;
  FUN_1453079c0(param_1 + 3,local_res8);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  FUN_14530a3c0(param_1 + 10,param_2);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 6;
  return param_1;
}



// FUNCTION 144f955e0 FUN_144f955e0 body=252 status=ok
// SIG undefined FUN_144f955e0(void)

void FUN_144f955e0(undefined8 *param_1)

{
  *param_1 = hkXmlStreamParser::vftable;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x17],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc4) & 0x7fffffff) << 3);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  FUN_14530a400(param_1 + 10);
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_145307a10(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f956e0 FUN_144f956e0 body=67 status=ok
// SIG undefined FUN_144f956e0(void)

longlong * FUN_144f956e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0xc0)) {
    piVar1 = *(int **)(param_1 + 0xb8);
    lVar2 = (longlong)*(int *)(param_1 + 0x80) + *(longlong *)(param_1 + 0x90);
    *param_2 = *piVar1 + lVar2;
    param_2[1] = piVar1[1] + lVar2;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 144f95730 FUN_144f95730 body=149 status=ok
// SIG undefined FUN_144f95730(void)

undefined4 *
FUN_144f95730(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_145307c70(param_1 + 0x18,param_3,0xffffffffffffffff);
  if (iVar2 < 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x80) + *(longlong *)(param_1 + 0x90);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8 + 4);
  *param_4 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8) + lVar3;
  param_4[1] = iVar1 + lVar3;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f957d0 FUN_144f957d0 body=395 status=ok
// SIG undefined FUN_144f957d0(void)

undefined4 *
FUN_144f957d0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char cStack_29;
  char *local_28;
  char *pcStack_20;
  
  iVar2 = FUN_145307c70(param_1 + 0x18,param_3,0xffffffffffffffff);
  if (-1 < iVar2) {
    lVar6 = (longlong)*(int *)(param_1 + 0x80) + *(longlong *)(param_1 + 0x90);
    pcVar7 = (char *)(*(int *)(*(longlong *)(param_1 + 0xb8) + 4 + (longlong)iVar2 * 8) + lVar6);
    pcVar4 = (char *)(*(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8) + lVar6);
    if ((((pcVar4 != pcVar7) && (*pcVar4 == '\"')) && (pcVar5 = pcVar4 + 1, pcVar5 != pcVar7)) &&
       (pcVar7 = pcVar7 + -1, *pcVar7 == '\"')) {
      if (0 < (int)pcVar7 - (int)pcVar5) {
        pcVar4 = pcVar4 + 2;
        if (*pcVar5 != '-') {
          pcVar4 = pcVar5;
        }
        if (pcVar4 < pcVar7) {
          cVar1 = *pcVar4;
          while ((byte)(cVar1 - 0x30U) < 10) {
            pcVar4 = pcVar4 + 1;
            if (pcVar7 <= pcVar4) {
              local_28 = pcVar5;
              pcStack_20 = pcVar7;
              FUN_144bfbb90(&local_28,0x20,pcVar5,(int)pcVar7 - (int)pcVar5);
              pcVar7[(longlong)&local_28 - (longlong)pcVar5] = '\0';
              uVar3 = FUN_144bfbbe0(&local_28,0);
              *param_4 = uVar3;
              *param_2 = 0;
              return param_2;
            }
            cVar1 = *pcVar4;
          }
        }
      }
      *param_2 = 0x80040200;
      *param_4 = 0;
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f95960 FUN_144f95960 body=50 status=ok
// SIG undefined FUN_144f95960(void)

byte * FUN_144f95960(longlong param_1,byte *param_2,undefined8 param_3)

{
  char extraout_var;
  
  FUN_145307c70(param_1 + 0x18,param_3,0xffffffffffffffff);
  *param_2 = (byte)(extraout_var >> 7) >> 7 ^ 1;
  return param_2;
}



// FUNCTION 144f959a0 FUN_144f959a0 body=744 status=ok
// SIG undefined FUN_144f959a0(void)

undefined4 * FUN_144f959a0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  size_t _Size;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_res10 [8];
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char *local_38;
  undefined8 uStack_30;
  
  FUN_144bdff00(param_3);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  iStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  while( true ) {
    local_e8 = (char *)CONCAT44(uVar7,uVar6);
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              lVar4 = FUN_144f5a370(&local_e8,0x26,0);
              if ((lVar4 == 0) ||
                 (local_38 = (char *)(lVar4 + 1), uStack_30 = CONCAT44(uStack_dc,iStack_e0),
                 local_38 == (char *)0x0)) {
                FUN_144be0720(param_3,local_e8,iStack_e0 - (int)local_e8);
                *param_1 = 0;
                return param_1;
              }
              FUN_144be0720(param_3,local_e8,(int)lVar4 - (int)local_e8);
              local_c8 = &DAT_149c15868;
              local_c0 = &DAT_149c1586c;
              local_e8 = local_38;
              iStack_e0 = (int)uStack_30;
              uStack_dc = uStack_30._4_4_;
              cVar2 = FUN_144f5a300(&local_e8,&local_c8);
              if (cVar2 == '\0') break;
              FUN_144be0720(param_3,&DAT_149993038);
            }
            local_b8 = &DAT_149c15870;
            local_b0 = &DAT_149c15873;
            cVar2 = FUN_144f5a300(&local_e8,&local_b8);
            if (cVar2 == '\0') break;
            FUN_144be0720(param_3,&DAT_149981f0c);
          }
          local_a8 = &DAT_149c15874;
          local_a0 = &DAT_149c15877;
          cVar2 = FUN_144f5a300(&local_e8,&local_a8);
          if (cVar2 == '\0') break;
          FUN_144be0720(param_3,&DAT_149981f18);
        }
        local_98 = &DAT_149c15878;
        local_90 = &DAT_149c1587d;
        cVar2 = FUN_144f5a300(&local_e8,&local_98);
        if (cVar2 == '\0') break;
        FUN_144be0720(param_3,&DAT_149981f00);
      }
      local_88 = &DAT_149c15880;
      local_80 = &DAT_149c15885;
      cVar2 = FUN_144f5a300(&local_e8,&local_88);
      if (cVar2 == '\0') break;
      FUN_144be0720(param_3,&DAT_14999304c);
    }
    if ((local_e8 == (char *)CONCAT44(uStack_dc,iStack_e0)) || (*local_e8 != '#')) break;
    local_e8 = local_e8 + 1;
    pcVar5 = (char *)FUN_144f5a370(&local_e8,0x3b,0);
    if (pcVar5 == (char *)0x0) break;
    local_58 = pcVar5 + 1;
    uStack_50 = CONCAT44(uStack_dc,iStack_e0);
    local_68 = local_e8;
    pcVar1 = local_68;
    if (local_58 == (char *)0x0) break;
    local_68._0_4_ = SUB84(local_e8,0);
    local_68._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
    uStack_60._0_4_ = SUB84(pcVar5,0);
    uStack_60._4_4_ = (undefined4)((ulonglong)pcVar5 >> 0x20);
    local_d8 = (undefined4)local_68;
    uStack_d4 = local_68._4_4_;
    uStack_d0 = (undefined4)uStack_60;
    uStack_cc = uStack_60._4_4_;
    if (((local_e8 == pcVar5) || (0xf < (ulonglong)((longlong)pcVar5 - (longlong)local_e8))) ||
       (local_68 = pcVar1, uStack_60 = pcVar5, cVar2 = FUN_144f5a4c0(&local_d8,&DAT_149c15848),
       cVar2 != '\0')) break;
    _Size = CONCAT44(uStack_cc,uStack_d0) - (longlong)CONCAT44(uStack_d4,local_d8);
    memcpy(local_78,(void *)CONCAT44(uStack_d4,local_d8),_Size);
    local_78[_Size] = 0;
    uVar3 = FUN_144bfbbd0(local_78,0);
    if (0xff < uVar3) break;
    local_res10[0] = (undefined1)uVar3;
    FUN_144be0720(param_3,local_res10);
    uVar6 = (undefined4)local_58;
    uVar7 = local_58._4_4_;
    iStack_e0 = (int)uStack_50;
    uStack_dc = uStack_50._4_4_;
  }
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 144f95c90 FUN_144f95c90 body=185 status=ok
// SIG undefined FUN_144f95c90(void)

undefined4 * FUN_144f95c90(undefined4 *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char local_28 [32];
  
  if (0 < param_2[2] - *param_2) {
    pcVar2 = *(char **)param_2;
    pcVar3 = *(char **)(param_2 + 2);
    pcVar5 = pcVar2 + 1;
    if (*pcVar2 != '-') {
      pcVar5 = pcVar2;
    }
    if (pcVar5 < pcVar3) {
      cVar1 = *pcVar5;
      while ((byte)(cVar1 - 0x30U) < 10) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) {
          FUN_144bfbb90(local_28,0x20,pcVar2,(int)pcVar3 - (int)pcVar2);
          pcVar3[(longlong)(local_28 + -(longlong)pcVar2)] = '\0';
          uVar4 = FUN_144bfbbe0(local_28,0);
          *param_3 = uVar4;
          *param_1 = 0;
          return param_1;
        }
        cVar1 = *pcVar5;
      }
    }
  }
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 144f95d50 FUN_144f95d50 body=124 status=ok
// SIG undefined FUN_144f95d50(void)

void FUN_144f95d50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc0) + 1;
  if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) < iVar3) {
    FUN_144f963d0((longlong *)(param_1 + 0xb8),&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar3;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
  piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
  return;
}



// FUNCTION 144f95dd0 FUN_144f95dd0 body=404 status=ok
// SIG undefined FUN_144f95dd0(void)

void FUN_144f95dd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *local_res10;
  
  FUN_145307cc0(param_1 + 0x18);
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (1 < iVar7) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0xb8) + 8);
    uVar5 = (ulonglong)((iVar7 - 2U >> 1) + 1);
    iVar6 = 0;
    do {
      piVar1 = piVar4 + 1;
      iVar7 = *piVar4;
      piVar4 = piVar4 + 4;
      iVar6 = iVar6 + 1 + (*piVar1 - iVar7);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_res10 = (int *)(param_1 + 0xc0);
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar6) {
    FUN_14039ab22(param_1 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  if ((*(int *)(param_1 + 0x48) < iVar6) || (iVar6 < *(int *)(param_1 + 0x48))) {
    *(int *)(param_1 + 0x48) = iVar6;
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  iVar7 = 1;
  if (1 < *(int *)(param_1 + 0xc0)) {
    lVar9 = 8;
    do {
      lVar3 = *(longlong *)(param_1 + 0xb8);
      iVar6 = *(int *)(lVar9 + lVar3);
      iVar10 = *(int *)(lVar9 + 4 + lVar3) - iVar6;
      FUN_144bfbb90(lVar8,(*(int *)(param_1 + 0x48) - (int)lVar8) + *(int *)(param_1 + 0x40),
                    (longlong)*(int *)(param_1 + 0x80) + (longlong)iVar6 +
                    *(longlong *)(param_1 + 0x90),iVar10);
      *(undefined1 *)(iVar10 + lVar8) = 0;
      iVar6 = *(int *)(param_1 + 0x38) + 1;
      if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar6) {
        FUN_144be3180(param_1 + 0x30,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 8);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = lVar8;
      }
      *(int *)(param_1 + 0x38) = iVar6;
      FUN_145307ad0(param_1 + 0x18,lVar8,(longlong)(iVar7 + 1));
      iVar7 = iVar7 + 2;
      lVar8 = lVar8 + (iVar10 + 1);
      lVar9 = lVar9 + 0x10;
    } while (iVar7 < *local_res10);
  }
  return;
}



// FUNCTION 144f95f70 FUN_144f95f70 body=724 status=ok
// SIG undefined FUN_144f95f70(void)

undefined4 FUN_144f95f70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_145307cc0(param_1 + 0x18);
  FUN_14530a2b0(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar4 = FUN_14530a430(param_1 + 0x50);
  while (uVar4 < 0xd) {
    switch(IMAGE_DOS_HEADER_140000000.e_magic +
           (&switchD_144f95fcc::switchdataD_144f96244)[(int)uVar4]) {
    case (char *)0x144f95fce:
      uVar4 = FUN_14530a430(param_1 + 0x50);
      break;
    case (char *)0x144f95fdc:
      goto LAB_144f95fe1;
    case (char *)0x144f95ff6:
      iVar5 = FUN_14530a430(param_1 + 0x50);
      if (iVar5 == 0xb) {
        iVar5 = FUN_14530a430(param_1 + 0x50);
        if (iVar5 != 8) {
          return 6;
        }
        FUN_144f95d50(param_1);
        iVar5 = FUN_14530a430(param_1 + 0x50);
        if (iVar5 == 6) {
          return 3;
        }
        return 6;
      }
      if (iVar5 != 8) {
        return 6;
      }
      FUN_144f95d50(param_1);
      iVar5 = FUN_14530a430(param_1 + 0x50);
      while( true ) {
        if (iVar5 == 6) {
          FUN_144f95dd0(param_1);
          return 1;
        }
        if (iVar5 != 8) {
          if (iVar5 != 0xb) {
            return 6;
          }
          iVar5 = FUN_14530a430(param_1 + 0x50);
          FUN_144f95dd0(param_1);
          if (iVar5 == 6) {
            return 2;
          }
          return 6;
        }
        FUN_144f95d50(param_1);
        iVar5 = FUN_14530a430(param_1 + 0x50);
        if (iVar5 != 9) {
          return 6;
        }
        iVar5 = FUN_14530a430(param_1 + 0x50);
        if (iVar5 != 10) break;
        FUN_144f95d50(param_1);
        iVar5 = FUN_14530a430(param_1 + 0x50);
      }
      return 6;
    case (char *)0x144f960e5:
      iVar5 = FUN_14530a430(param_1 + 0x50);
      if (iVar5 != 8) {
        return 6;
      }
      FUN_144f95d50(param_1);
      while( true ) {
        iVar5 = FUN_14530a430(param_1 + 0x50);
        if (iVar5 == 7) {
          FUN_144f95dd0(param_1);
          return 0;
        }
        if (iVar5 != 8) break;
        plVar1 = (longlong *)(param_1 + 0xb8);
        iVar5 = *(int *)(param_1 + 0xc0) + 1;
        if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) < iVar5) {
          FUN_144f963d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        iVar3 = *(int *)(param_1 + 0xc0);
        *(int *)(param_1 + 0xc0) = iVar5;
        piVar2 = (int *)(*plVar1 + (longlong)iVar3 * 8);
        *piVar2 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
        piVar2[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80)
        ;
        iVar5 = FUN_14530a430(param_1 + 0x50);
        if (iVar5 != 9) {
          return 6;
        }
        iVar5 = FUN_14530a430(param_1 + 0x50);
        if (iVar5 != 10) {
          return 6;
        }
        iVar5 = *(int *)(param_1 + 0xc0) + 1;
        if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) < iVar5) {
          FUN_144f963d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        iVar3 = *(int *)(param_1 + 0xc0);
        *(int *)(param_1 + 0xc0) = iVar5;
        piVar2 = (int *)(*plVar1 + (longlong)iVar3 * 8);
        *piVar2 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
        piVar2[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80)
        ;
      }
      return 6;
    case (char *)0x144f96226:
      return 4;
    case (char *)0x144f96230:
      return 5;
    case (char *)0x144f9623a:
      return 7;
    }
  }
LAB_144f95fe1:
  return 6;
}



// FUNCTION 144f96280 FUN_144f96280 body=325 status=ok
// SIG undefined FUN_144f96280(void)

undefined8 * FUN_144f96280(undefined8 *param_1,uint param_2)

{
  *param_1 = hkXmlStreamParser::vftable;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x17],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc4) & 0x7fffffff) << 3);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  FUN_14530a400(param_1 + 10);
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_145307a10(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 144f963d0 FUN_144f963d0 body=269 status=ok
// SIG undefined FUN_144f963d0(void)

void FUN_144f963d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f964e0 FUN_144f964e0 body=230 status=ok
// SIG undefined FUN_144f964e0(void)

undefined8 * FUN_144f964e0(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = ReflectStrings::vftable;
  uVar2 = FUN_145307a30(param_1 + 8);
  iVar1 = FUN_145307ac0(param_1 + 8,uVar2);
  while (iVar1 != 0) {
    iVar1 = FUN_145307a70(param_1 + 8,uVar2);
    if (iVar1 != 0) {
      uVar3 = FUN_145307a60(param_1 + 8,uVar2);
      (*DAT_14c787678)(0,uVar3,0);
    }
    uVar2 = FUN_145307a80(param_1 + 8,uVar2);
    iVar1 = FUN_145307ac0(param_1 + 8,uVar2);
  }
  FUN_145307a10(param_1 + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 144f96600 FUN_144f96600 body=21 status=ok
// SIG undefined FUN_144f96600(void)

void FUN_144f96600(undefined8 param_1,undefined4 param_2)

{
  FUN_144f96620(DAT_14c799e40,param_1,param_2,1);
  return;
}



// FUNCTION 144f96620 FUN_144f96620 body=381 status=ok
// SIG undefined FUN_144f96620(void)

undefined1 * FUN_144f96620(longlong param_1,undefined1 *param_2,uint param_3,char param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 *local_28;
  uint local_20;
  uint local_1c;
  
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  local_1c = 0x80000000;
  if (param_3 != 0xffffffff) {
    if (0 < (int)param_3) {
      FUN_14039ab22(&local_28,&PTR_vftable_14c6e47c0,(longlong)(int)param_3);
      uVar7 = (ulonglong)param_3;
      puVar6 = local_28;
      do {
        if (puVar6 != (undefined1 *)0x0) {
          uVar2 = *param_2;
          param_2 = param_2 + 1;
          *puVar6 = uVar2;
        }
        uVar7 = uVar7 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
    }
    local_20 = param_3;
    if ((int)(local_1c & 0x7fffffff) < (int)(param_3 + 1)) {
      FUN_144be3310(&local_28,&PTR_vftable_14c6e47c0,(longlong)(int)(param_3 + 1));
    }
    if (local_28 + (int)local_20 != (undefined1 *)0x0) {
      local_28[(int)local_20] = 0;
    }
    param_4 = '\x01';
    param_2 = local_28;
  }
  uVar3 = local_1c;
  puVar6 = local_28;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  lVar1 = param_1 + 0x40;
  uVar5 = FUN_145307bd0(lVar1,param_2);
  iVar4 = FUN_145307ac0(lVar1,uVar5);
  if (iVar4 == 0) {
    if (param_4 != '\0') {
      param_2 = (undefined1 *)FUN_144bfbdc0(param_2);
    }
    FUN_145307ad0(lVar1,param_2,param_4);
  }
  else {
    param_2 = (undefined1 *)FUN_145307a60(lVar1,uVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((-1 < (int)uVar3) && (puVar6 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,puVar6,uVar3 & 0x7fffffff);
  }
  return param_2;
}



// FUNCTION 144f967a0 FUN_144f967a0 body=226 status=ok
// SIG undefined FUN_144f967a0(void)

undefined4 * FUN_144f967a0(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x58;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,"ReflectStrings");
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[1] = 0xffffffff;
      *puVar2 = ReflectStrings::vftable;
      puVar2[2] = 1;
      FUN_144bdde80(puVar2 + 3);
      FUN_1453079c0(puVar2 + 8,local_res8 & 0xff);
    }
    puVar1 = (undefined8 *)*param_2;
    if ((puVar2 != puVar1) && (*param_2 = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f96890 FUN_144f96890 body=95 status=ok
// SIG undefined FUN_144f96890(void)

undefined4 * FUN_144f96890(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f968f0 FUN_144f968f0 body=67 status=ok
// SIG undefined FUN_144f968f0(void)

ulonglong FUN_144f968f0(ulonglong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 >> 8 ^
              *(ulonglong *)(&DAT_149c159a0 + (ulonglong)(byte)(bVar1 ^ (byte)param_1) * 8);
  }
  return ~param_1;
}



// FUNCTION 144f96940 FUN_144f96940 body=95 status=ok
// SIG undefined FUN_144f96940(void)

undefined4 * FUN_144f96940(undefined4 *param_1)

{
  FUN_144bfb540(param_1,0xffffffff,0x34);
  *param_1 = 4;
  param_1[4] = 0;
  param_1[0xb] = 0;
  param_1[1] = 1;
  *(undefined8 *)(param_1 + 2) = 1;
  *(undefined8 *)(param_1 + 5) = 1;
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined8 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return param_1;
}



// FUNCTION 144f969a0 FUN_144f969a0 body=354 status=ok
// SIG undefined FUN_144f969a0(void)

int * FUN_144f969a0(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == (char *)0x0) {
    param_1[0] = 8;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 1;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    return param_1;
  }
  iVar4 = FUN_144bfbbb0(param_2);
  if (iVar4 < 3) {
    return param_1;
  }
  if ((*param_2 == '3') && (param_2[1] == '2')) {
    bVar3 = 1;
LAB_144f96a20:
    if (bVar3 == 0) {
      return param_1;
    }
  }
  else {
    bVar3 = 0;
    if ((*param_2 != '6') || (param_2[1] != '4')) goto LAB_144f96a20;
  }
  cVar2 = param_2[2];
  param_2 = param_2 + 3;
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar4 = (bVar3 ^ 1) + 1;
  param_1[1] = 0;
  param_1[2] = 1;
  uVar5 = iVar4 * 0x2000 | (int)cVar2;
  *param_1 = iVar4 * 4;
  param_1[3] = 1;
  param_1[4] = 1;
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((int)uVar5 < 0x4068) {
    if ((uVar5 == 0x4067) || (uVar5 == 0x2061)) goto LAB_144f96acb;
    if (uVar5 == 0x2067) {
      param_1[4] = 0;
      goto LAB_144f96acb;
    }
    if (uVar5 != 0x206d) goto LAB_144f96ab9;
  }
  else {
    if (uVar5 != 0x406d) {
      if (uVar5 != 0x406e) {
LAB_144f96ab9:
        *(undefined1 *)(param_1 + 0xc) = 0;
        goto LAB_144f96acb;
      }
      param_1[6] = 1;
    }
    param_1[3] = 0;
  }
  param_1[5] = 0;
LAB_144f96acb:
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      if (cVar2 == 'd') {
        param_1[10] = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  return param_1;
}



// FUNCTION 144f96b10 FUN_144f96b10 body=149 status=ok
// SIG undefined FUN_144f96b10(void)

undefined8 * FUN_144f96b10(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0x430;
  *param_1 = hkReflect::TypeCopier::vftable;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Pimpl");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144f96e40(lVar1,param_2);
    param_1[1] = uVar2;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 144f96bb0 FUN_144f96bb0 body=442 status=ok
// SIG undefined FUN_144f96bb0(void)

ulonglong FUN_144f96bb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *local_228;
  int local_220;
  uint local_21c;
  undefined4 local_218 [128];
  
  piVar1 = *(int **)(param_1 + 8);
  local_228 = local_218;
  uVar8 = 0;
  local_21c = 0x80000020;
  local_220 = 0;
  uVar7 = FUN_144f976a0(piVar1,param_2,&local_228);
  if (*piVar1 < 0) {
    *piVar1 = 0;
    local_220 = 0;
    if ((-1 < (int)local_21c) && (local_228 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_228,(ulonglong)(local_21c & 0x7fffffff) << 4);
    }
  }
  else {
    uVar12 = uVar8;
    if (0 < local_220) {
      do {
        FUN_144f933b0(*(undefined8 *)(uVar12 + (longlong)local_228),piVar1 + 2);
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
        uVar12 = uVar12 + 0x10;
      } while ((int)uVar9 < local_220);
    }
    puVar10 = local_228;
    if (param_3 != (longlong *)0x0) {
      puVar13 = local_228 + (longlong)local_220 * 4;
      lVar6 = param_3[1];
      iVar11 = (int)((longlong)puVar13 - (longlong)local_228 >> 4) + (int)lVar6;
      if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar11) {
        FUN_144f99020(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      puVar5 = (undefined4 *)((longlong)(int)lVar6 * 0x10 + *param_3);
      for (; puVar10 != puVar13; puVar10 = puVar10 + 4) {
        if (puVar5 != (undefined4 *)0x0) {
          uVar2 = puVar10[1];
          uVar3 = puVar10[2];
          uVar4 = puVar10[3];
          *puVar5 = *puVar10;
          puVar5[1] = uVar2;
          puVar5[2] = uVar3;
          puVar5[3] = uVar4;
        }
        puVar5 = puVar5 + 4;
      }
      *(int *)(param_3 + 1) = iVar11;
    }
    local_220 = 0;
    uVar8 = uVar7;
    if ((-1 < (int)local_21c) && (local_228 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_228,(ulonglong)(local_21c & 0x7fffffff) << 4);
    }
  }
  return uVar8;
}



// FUNCTION 144f96d70 FUN_144f96d70 body=8 status=ok
// SIG undefined FUN_144f96d70(void)

undefined4 FUN_144f96d70(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
}



// FUNCTION 144f96d80 FUN_144f96d80 body=8 status=ok
// SIG undefined FUN_144f96d80(void)

undefined4 FUN_144f96d80(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc);
}



// FUNCTION 144f96d90 FUN_144f96d90 body=167 status=ok
// SIG undefined FUN_144f96d90(void)

undefined8 * FUN_144f96d90(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *param_1 = hkReflect::TypeCopier::vftable;
  if (lVar1 != 0) {
    *(undefined ***)(lVar1 + 0x58) = hkMemory::BufferedAllocatorNoCleanup::vftable;
    FUN_144f89650();
    FUN_144f98700(lVar1 + 0x38);
    FUN_144f98680(lVar1 + 0x18);
    (*DAT_14c787678)(0,lVar1,0);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f96e40 FUN_144f96e40 body=2141 status=ok
// SIG undefined FUN_144f96e40(void)

undefined4 * FUN_144f96e40(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 *local_res8;
  char *local_res10;
  
  FUN_144f93390(param_1 + 2);
  param_1[9] = 0x80000000;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  uVar4 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 10) = uVar4;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x80000000;
  uVar4 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  param_1[0x14] = 0;
  *(undefined ***)(param_1 + 0x16) = hkMemory::BufferedAllocatorNoCleanup::vftable;
  *(undefined ***)(param_1 + 0x18) = &PTR_vftable_14c6e47a0;
  *(undefined8 *)(param_1 + 0x1a) = 0x1fc0;
  param_1[0x1c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x80000000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x80000000;
  FUN_144f98820(param_1 + 0x28);
  *param_1 = 0;
  *(bool *)(param_1 + 1) = param_2[9] != 0;
  *(bool *)((longlong)param_1 + 5) = param_2[8] != 0;
  *(bool *)((longlong)param_1 + 6) = param_2[1] != 0;
  iVar10 = param_2[0xb];
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  *(bool *)((longlong)param_1 + 7) = iVar10 != 0;
  param_1[2] = *param_2;
  uVar3 = 4;
  if (param_2[10] != 0) {
    uVar3 = 8;
  }
  param_1[3] = uVar3;
  *(bool *)(param_1 + 4) = param_2[5] != 0;
  *(bool *)((longlong)param_1 + 0x11) = param_2[6] != 0;
  *(bool *)((longlong)param_1 + 0x12) = param_2[7] != 0;
  *(undefined **)(param_1 + 0x30) = &DAT_149982ba0;
  *(undefined **)(param_1 + 0x3e) = &DAT_149982c64;
  *(char **)(param_1 + 0x4c) = "signed char";
  *(char **)(param_1 + 0x5a) = "unsigned char";
  *(char **)(param_1 + 0x68) = "short";
  *(char **)(param_1 + 0x76) = "unsigned short";
  *(undefined1 **)(param_1 + 0x84) = &DAT_149971208;
  *(char **)(param_1 + 0x92) = "unsigned int";
  *(undefined **)(param_1 + 0xa0) = &DAT_149982c20;
  *(char **)(param_1 + 0xae) = "unsigned long";
  puVar13 = &DAT_14c784878;
  *(char **)(param_1 + 0xbc) = "long long";
  *(char **)(param_1 + 0xca) = "unsigned long long";
  *(char **)(param_1 + 0xd8) = "float";
  *(char **)(param_1 + 0xe6) = "double";
  *(char **)(param_1 + 0xf0) = "hkReal";
  *(char **)(param_1 + 0xf8) = "hkUlong";
  *(char **)(param_1 + 0x100) = "hkLong";
  *(char **)(param_1 + 0x108) = "hkUintReal";
  iVar10 = param_2[4];
  iVar1 = param_2[2];
  *(undefined **)(param_1 + 0x2e) = &DAT_14c784818;
  *(undefined **)(param_1 + 0x3c) = &DAT_14c7847b8;
  *(undefined **)(param_1 + 0x4a) = &DAT_14c7847b8;
  *(undefined **)(param_1 + 0x58) = &DAT_14c784848;
  uVar9 = 0x100;
  if (iVar1 != 0) {
    uVar9 = 0;
  }
  *(undefined8 *)(param_1 + 0x2c) = 0x2002;
  *(undefined8 *)(param_1 + 0x32) = 0x10001;
  *(undefined4 **)(param_1 + 0x34) = param_1;
  *(ulonglong *)(param_1 + 100) = uVar9 | 0x4204;
  puVar12 = &DAT_14c784888;
  *(undefined8 *)(param_1 + 0x3a) = 0x2004;
  *(undefined **)(param_1 + 0x66) = &DAT_14c784858;
  *(undefined8 *)(param_1 + 0x40) = 0x10001;
  *(undefined4 **)(param_1 + 0x42) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0x2204;
  *(ulonglong *)(param_1 + 0x72) = uVar9 | 0x4004;
  *(undefined8 *)(param_1 + 0x4e) = 0x10001;
  *(undefined4 **)(param_1 + 0x50) = param_1;
  *(undefined **)(param_1 + 0x74) = &DAT_14c784868;
  uVar11 = uVar9 | 0x10204;
  *(undefined8 *)(param_1 + 0x56) = 0x2004;
  *(undefined8 *)(param_1 + 0x5c) = 0x10001;
  *(undefined4 **)(param_1 + 0x5e) = param_1;
  uVar2 = 4;
  if (iVar10 != 0) {
    uVar2 = 8;
  }
  *(undefined8 *)(param_1 + 0x6a) = 0x20002;
  *(undefined4 **)(param_1 + 0x6c) = param_1;
  *(undefined8 *)(param_1 + 0x78) = 0x20002;
  *(undefined4 **)(param_1 + 0x7a) = param_1;
  *(ulonglong *)(param_1 + 0x80) = uVar9 | 0x8204;
  *(undefined **)(param_1 + 0x82) = &DAT_14c784878;
  *(undefined8 *)(param_1 + 0x86) = 0x40004;
  *(undefined4 **)(param_1 + 0x88) = param_1;
  *(ulonglong *)(param_1 + 0x8e) = uVar9 | 0x8004;
  *(undefined **)(param_1 + 0x90) = &DAT_14c784888;
  *(undefined8 *)(param_1 + 0x94) = 0x40004;
  *(undefined4 **)(param_1 + 0x96) = param_1;
  *(ulonglong *)(param_1 + 0xb8) = uVar11;
  *(undefined **)(param_1 + 0xba) = &DAT_14c7848b8;
  uVar7 = (ulonglong)uVar2 << 0x10 | 8;
  *(undefined4 **)(param_1 + 0xc0) = param_1;
  *(ulonglong *)(param_1 + 0xbe) = uVar7;
  *(undefined **)(param_1 + 200) = &DAT_14c7848c8;
  uVar5 = uVar9 | 0x10004;
  *(ulonglong *)(param_1 + 0xcc) = uVar7;
  *(ulonglong *)(param_1 + 0xc6) = uVar5;
  *(undefined4 **)(param_1 + 0xce) = param_1;
  if ((param_2[1] != 0) || ((iVar10 = 4, *param_2 == 8 && (param_2[3] != 0)))) {
    iVar10 = 8;
  }
  if (iVar10 == 4) {
    uVar7 = 0x40004;
    uVar11 = uVar9 | 0x8204;
    uVar5 = uVar9 | 0x8004;
  }
  else {
    puVar12 = &DAT_14c7848c8;
    puVar13 = &DAT_14c7848b8;
  }
  *(ulonglong *)(param_1 + 0x9c) = uVar11;
  *(undefined **)(param_1 + 0x9e) = puVar13;
  *(ulonglong *)(param_1 + 0xa2) = uVar7;
  *(undefined4 **)(param_1 + 0xa4) = param_1;
  *(ulonglong *)(param_1 + 0xaa) = uVar5;
  *(undefined **)(param_1 + 0xac) = puVar12;
  *(ulonglong *)(param_1 + 0xb0) = uVar7;
  *(undefined4 **)(param_1 + 0xb2) = param_1;
  *(ulonglong *)(param_1 + 0xd4) = uVar9 | 0x174605;
  *(undefined **)(param_1 + 0xd6) = &DAT_14c7848d8;
  *(undefined **)(param_1 + 0xe4) = &DAT_14c7848e8;
  *(ulonglong *)(param_1 + 0xe2) = uVar9 | 0x345e05;
  *(undefined8 *)(param_1 + 0xda) = 0x40004;
  *(undefined4 **)(param_1 + 0xdc) = param_1;
  *(ulonglong *)(param_1 + 0xe8) = (ulonglong)uVar2 << 0x10 | 8;
  *(undefined4 **)(param_1 + 0xea) = param_1;
  lVar6 = 0x378;
  if (param_2[10] == 0) {
    lVar6 = 0x340;
  }
  lVar8 = 0x308;
  *(longlong *)(param_1 + 0xee) = lVar6 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0xf2) = *(undefined8 *)(lVar6 + (longlong)param_1 + 0x30);
  lVar6 = 0x308;
  if (param_2[10] == 0) {
    lVar6 = 0x228;
  }
  *(longlong *)(param_1 + 0x106) = lVar6 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0x10a) = *(undefined8 *)(lVar6 + (longlong)param_1 + 0x30);
  if ((*param_2 == 8) || (lVar6 = 0x260, param_2[1] != 0)) {
    lVar6 = 0x2d0;
  }
  *(longlong *)(param_1 + 0xfe) = lVar6 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0x102) = *(undefined8 *)(lVar6 + (longlong)param_1 + 0x30);
  if ((*param_2 != 8) && (param_2[1] == 0)) {
    lVar8 = 0x298;
  }
  *(longlong *)(param_1 + 0xf6) = lVar8 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0xfa) = *(undefined8 *)(lVar8 + (longlong)param_1 + 0x30);
  local_res8 = param_1 + 0x28;
  local_res10 = "bool";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x36;
  local_res10 = "char";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x44;
  local_res10 = "signed char";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x52;
  local_res10 = "unsigned char";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x60;
  local_res10 = "short";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x6e;
  local_res10 = "unsigned short";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x7c;
  local_res10 = "int";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x8a;
  local_res10 = "unsigned int";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0x98;
  local_res10 = "long";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0xa6;
  local_res10 = "unsigned long";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0xb4;
  local_res10 = "long long";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0xc2;
  local_res10 = "unsigned long long";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0xd0;
  local_res10 = "float";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0xde;
  local_res10 = "double";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0xec;
  local_res10 = "hkReal";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res8 = param_1 + 0xf4;
  local_res10 = "hkUlong";
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res10 = "hkLong";
  local_res8 = param_1 + 0xfc;
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  local_res10 = "hkUintReal";
  local_res8 = param_1 + 0x104;
  FUN_144f98780(param_1 + 0xe,&local_res10,&local_res8);
  return param_1;
}



// FUNCTION 144f976a0 FUN_144f976a0 body=824 status=ok
// SIG undefined FUN_144f976a0(void)

longlong FUN_144f976a0(int *param_1,byte *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  byte *pbVar10;
  longlong lVar11;
  byte *local_res10;
  byte *local_res20;
  undefined8 local_218;
  code *local_210;
  undefined8 local_208;
  code *local_200;
  byte **local_1f8;
  int local_1f0 [4];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [80];
  undefined1 local_180 [344];
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (-1 < *param_1) {
    local_res10 = param_2;
    if ((*(char *)((longlong)param_1 + 6) == '\0') &&
       (puVar3 = (uint *)FUN_144b45d50(param_2,&local_res20), (~(byte)(*puVar3 >> 9) & 1) == 0)) {
      if ((1 < DAT_14c799f00) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          local_res10 = param_2;
          uVar4 = FUN_144bef0c0(param_2,local_1f0);
          uVar5 = FUN_144bdc640(local_1d0,&DAT_14c799eb0,2);
          local_218 = 2;
          local_210 = FUN_144c14800;
          local_200 = FUN_144f92f00;
          local_1f8 = &local_res10;
          local_208 = uVar4;
          lVar6 = FUN_144bdc480(uVar5,"Cannot copy {}@{}, it is not retargetable",&local_218,0);
          *(char **)(lVar6 + 0x38) = "Reflect\\Builder\\hkTypeCopier.cpp";
          *(undefined8 *)(lVar6 + 0x40) = 0x17e;
          FUN_144bdc690(local_1d0);
          *param_1 = -0x7ffbfe00;
          return 0;
        }
        local_res20 = param_2;
        uVar4 = FUN_144bef0c0(param_2,local_1e0);
        uVar5 = FUN_144bdc810(local_180,&DAT_14c799eb0,2);
        local_218 = 2;
        local_210 = FUN_144c14800;
        local_200 = FUN_144f92f00;
        local_1f8 = &local_res20;
        local_208 = uVar4;
        lVar6 = FUN_144bdc480(uVar5,"Cannot copy {}@{}, it is not retargetable",&local_218,0);
        *(char **)(lVar6 + 0x38) = "Reflect\\Builder\\hkTypeCopier.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0x17e;
        FUN_144bdc8a0(local_180);
      }
      *param_1 = -0x7ffbfe00;
      return 0;
    }
    local_res20 = (byte *)0x0;
    FUN_144f98b60(param_1 + 6,local_1f0,&local_res10,&local_res20);
    lVar11 = (longlong)local_1f0[0];
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 6) + 8 + lVar11 * 0x10);
    if (lVar6 != 0) {
      return lVar6;
    }
    puVar7 = (undefined4 *)FUN_144bef800(param_2,&local_res10);
    pbVar10 = (byte *)0x0;
    if (((byte)*puVar7 & 0x1f) == 1) {
      pbVar10 = param_2;
    }
    if ((pbVar10 == (byte *)0x0) || (iVar2 = FUN_144beec90(param_2), iVar2 == 0)) {
      if ((((*param_2 & 8) == 0) ||
          (((puVar8 = (undefined8 *)FUN_144befea0(param_2,8), puVar8 == (undefined8 *)0x0 ||
            (local_res10 = (byte *)*puVar8, local_res10 == (byte *)0x0)) ||
           (lVar6 = FUN_144f98d20(param_1 + 0xe,&local_res10), lVar6 == 0)))) ||
         (lVar6 = *(longlong *)
                   (*(longlong *)(param_1 + 0xe) + 8 + (longlong)*(int *)(lVar6 + 4) * 0x10),
         lVar6 == 0)) {
        lVar6 = FUN_144f979e0(param_1,param_2);
        *(longlong *)(*(longlong *)(param_1 + 6) + 8 + lVar11 * 0x10) = lVar6;
        FUN_144f97d60(param_1,lVar6,param_2,param_3);
        iVar2 = (int)param_3[1] + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar2) {
          FUN_144f98f10(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar2);
        }
        plVar9 = (longlong *)((longlong)(int)param_3[1] * 0x10 + *param_3);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = lVar6;
          plVar9[1] = (longlong)param_2;
        }
        *(int *)(param_3 + 1) = iVar2;
        return lVar6;
      }
    }
    else {
      lVar6 = FUN_144f976a0(param_1,&DAT_14c6ddac0,param_3);
    }
    *(longlong *)(*(longlong *)(param_1 + 6) + 8 + lVar11 * 0x10) = lVar6;
    return lVar6;
  }
  return 0;
}



// FUNCTION 144f979e0 FUN_144f979e0 body=887 status=ok
// SIG undefined FUN_144f979e0(void)

undefined8 FUN_144f979e0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  int iVar12;
  longlong local_res8;
  longlong *local_res10;
  undefined1 local_278 [16];
  ulonglong local_268;
  undefined1 local_260 [88];
  undefined8 local_208;
  ulonglong local_200;
  undefined8 local_1e0;
  undefined8 *local_180;
  ulonglong local_150;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_118;
  
  local_res8 = param_1;
  pbVar3 = (byte *)FUN_144bef800(param_2,&local_res10);
  if ((*pbVar3 & 0x1f) == 0) {
LAB_144f97a3a:
    uVar2 = 0x230001b;
  }
  else {
    puVar4 = (undefined4 *)FUN_144bef800(param_2,&local_res10);
    uVar2 = 0x230001f;
    if (((byte)*puVar4 & 0x1f) == 1) goto LAB_144f97a3a;
  }
  iVar12 = 0;
  uVar11 = 0;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar11 = 0x4000;
  }
  FUN_144f6faa0(local_260);
  FUN_144f6ff20(local_260,param_2,uVar11 | uVar2);
  FUN_144f6fee0(local_260,param_1);
  local_208 = 0;
  if ((((*param_2 & 8) != 0) &&
      (plVar5 = (longlong *)FUN_144befea0(param_2,8), plVar5 != (longlong *)0x0)) && (*plVar5 != 0))
  {
    local_1e0 = FUN_144bfbd30(*plVar5,param_1 + 0x58);
    local_200 = local_200 | 8;
  }
  if (((((uint)*param_2 >> 0xf & 1) != 0) &&
      (plVar5 = (longlong *)FUN_144befea0(param_2,0x8000), plVar5 != (longlong *)0x0)) &&
     (lVar1 = *plVar5, lVar1 != 0)) {
    uVar2 = *(uint *)(lVar1 + 8) & 0xffff;
    if (uVar2 != 0) {
      local_res10 = (longlong *)(param_1 + 0x58);
      local_180 = (undefined8 *)
                  (**(code **)(*local_res10 + 8))(local_res10,((ulonglong)uVar2 + 1) * 0x10);
      plVar5 = local_res10;
      local_180[1] = (ulonglong)uVar2;
      *local_180 = 0;
      if (*(ushort *)(lVar1 + 8) != 0) {
        puVar9 = local_180 + 3;
        do {
          uVar6 = FUN_144bfbd30(*(undefined8 *)((lVar1 - (longlong)local_180) + (longlong)puVar9),
                                plVar5);
          *puVar9 = uVar6;
          iVar12 = iVar12 + 1;
          puVar9[-1] = *(undefined8 *)((lVar1 - (longlong)local_180) + -8 + (longlong)puVar9);
          puVar9 = puVar9 + 2;
          param_1 = local_res8;
        } while (iVar12 < (int)(uint)*(ushort *)(lVar1 + 8));
      }
      local_200 = local_200 | 0x8000;
    }
  }
  puVar10 = (ulonglong *)0x0;
  if (((((uint)*param_2 >> 0x17 & 1) != 0) &&
      (plVar5 = (longlong *)FUN_144befea0(param_2,0x800000), plVar5 != (longlong *)0x0)) &&
     (*plVar5 != 0)) {
    if (*(short *)(*plVar5 + 4) == 0) {
      puVar4 = (undefined4 *)FUN_144bef800(param_2,&local_res8);
      puVar7 = puVar10;
      if (((byte)*puVar4 & 0x1f) == 7) {
        puVar7 = param_2;
      }
      if (puVar7 == (ulonglong *)0x0) goto LAB_144f97bee;
    }
    local_200 = local_200 | 0x800000;
    local_140 = 0;
  }
LAB_144f97bee:
  if ((((*(char *)(param_1 + 6) == '\0') && ((*param_2 & 0x4000) != 0)) &&
      (plVar5 = (longlong *)FUN_144befea0(param_2,0x4000), plVar5 != (longlong *)0x0)) &&
     (((longlong *)*plVar5 != (longlong *)0x0 &&
      (uVar8 = (*(longlong *)*plVar5 << 4) >> 4, 0 < (int)uVar8)))) {
    uVar8 = uVar8 & 0xffffffff;
    do {
      FUN_144f702e0(local_260,0,0);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((*(char *)(param_1 + 4) != '\0') && ((*param_2 >> 0x15 & 1) != 0)) {
    if (((*param_2 >> 0x15 & 1) != 0) &&
       (puVar9 = (undefined8 *)FUN_144befea0(param_2,0x200000), puVar9 != (undefined8 *)0x0)) {
      puVar10 = (ulonglong *)*puVar9;
    }
    local_200 = local_200 | 0x200000;
    local_150 = (ulonglong)puVar10 & 0xffffffffffffff7f;
  }
  if (((uint)*param_2 >> 0x1c & 1) != 0) {
    local_200 = local_200 | 0x10000000;
    local_118 = 0;
  }
  if (*(char *)(param_1 + 6) != '\0') {
    local_200 = local_200 | 0x200000;
    local_150 = local_150 & 0xffffffffffffdfff;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    plVar5 = (longlong *)FUN_144f69110(local_278,param_2,&DAT_14c6df050);
    lVar1 = *plVar5;
    if ((local_268 & 1) != 0) {
      FUN_144be6b30(local_268 & 0xfffffffffffffffe);
    }
    if ((lVar1 != 0) &&
       (((((uint)*param_2 >> 0x19 & 1) == 0 ||
         (plVar5 = (longlong *)FUN_144befea0(param_2,0x2000000), plVar5 == (longlong *)0x0)) ||
        (*plVar5 == 0)))) {
      local_200 = local_200 | 0x2000000;
      local_130 = 0;
    }
  }
  uVar6 = FUN_144f706a0(local_260,param_1 + 0x58);
  FUN_144f6fbe0(local_260);
  return uVar6;
}



// FUNCTION 144f97d60 FUN_144f97d60 body=2296 status=ok
// SIG undefined FUN_144f97d60(void)

void FUN_144f97d60(longlong param_1,ulonglong *param_2,uint *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong local_res10;
  uint *local_res18;
  undefined8 local_res20;
  uint *local_378;
  int local_370;
  undefined8 *local_368;
  undefined1 *local_360;
  undefined1 *local_358;
  undefined8 local_350;
  longlong local_348;
  ulonglong local_340;
  longlong *local_338 [2];
  undefined1 local_328 [8];
  undefined1 local_320 [16];
  ulonglong local_310;
  undefined8 local_308;
  int local_300;
  undefined8 local_268 [12];
  ulonglong local_208;
  ulonglong *local_170;
  ulonglong local_160;
  
  plVar23 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(longlong *)(param_3 + 2) != 0) {
    uVar1 = FUN_144f976a0(param_1,*(longlong *)(param_3 + 2),param_4);
    param_2[1] = uVar1;
  }
  uVar1 = *param_2;
  local_res10 = uVar1;
  if ((uVar1 & 4) != 0) {
    plVar18 = (longlong *)0x0;
    plVar21 = plVar23;
    if (((*param_3 & 1) != 0) &&
       (puVar2 = (undefined8 *)FUN_144befea0(param_3,1), puVar2 != (undefined8 *)0x0)) {
      plVar21 = (longlong *)*puVar2;
    }
    uVar12 = (uint)plVar21 & 0x1f;
    if (uVar12 == 2) {
      if (*(char *)(param_1 + 6) == '\0') {
LAB_144f97e0e:
        uVar3 = FUN_144f6a4d0((ulonglong)plVar21 & 0xffffffff);
        plVar18 = (longlong *)FUN_144befdb0(uVar3);
      }
      else {
        puVar2 = (undefined8 *)FUN_144befed0(param_2,1);
        plVar18 = (longlong *)&DAT_14c784828;
        *puVar2 = 0x2002;
      }
    }
    else if (uVar12 == 3) {
      if (*(char *)(param_1 + 6) != '\0') {
        puVar8 = (ulonglong *)FUN_144befed0(param_2,1);
        *puVar8 = (ulonglong)((uint)((ulonglong)plVar21 >> 7) & 1) << 7 | 3;
      }
    }
    else if ((uVar12 == 4) || (plVar18 = plVar23, uVar12 == 5)) goto LAB_144f97e0e;
    puVar2 = (undefined8 *)FUN_144befed0(param_2,4);
    *puVar2 = plVar18;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    puVar2 = (undefined8 *)FUN_144bef4c0(param_3);
    uVar12 = *(uint *)(puVar2 + 1) & 0xffff;
    uVar1 = local_res10;
    if (uVar12 != 0) {
      plVar21 = plVar23;
      if ((((uint)*param_2 >> 0xf & 1) != 0) &&
         (puVar4 = (undefined8 *)FUN_144befea0(param_2,0x8000), puVar4 != (undefined8 *)0x0)) {
        plVar21 = (longlong *)*puVar4;
      }
      uVar3 = local_res20;
      uVar19 = (ulonglong)uVar12;
      param_3 = local_res18;
      uVar1 = local_res10;
      if (uVar12 != 0) {
        puVar4 = puVar2;
        do {
          puVar15 = puVar4 + 2;
          if (*(char *)puVar4[3] == 't') {
            uVar5 = FUN_144f976a0(param_1,*puVar15,uVar3);
            *(undefined8 *)(((longlong)plVar21 - (longlong)puVar2) + (longlong)puVar15) = uVar5;
          }
          uVar19 = uVar19 - 1;
          param_3 = local_res18;
          uVar1 = local_res10;
          puVar4 = puVar15;
        } while (uVar19 != 0);
      }
    }
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    plVar21 = plVar23;
    if (((*param_3 >> 0xe & 1) != 0) &&
       (puVar2 = (undefined8 *)FUN_144befea0(param_3,0x4000), puVar2 != (undefined8 *)0x0)) {
      plVar21 = (longlong *)*puVar2;
    }
    iVar22 = (int)((*plVar21 << 4) >> 4);
    if (iVar22 != 0) {
      plVar18 = plVar23;
      if ((((uint)*param_2 >> 0xe & 1) != 0) &&
         (puVar2 = (undefined8 *)FUN_144befea0(param_2,0x4000), puVar2 != (undefined8 *)0x0)) {
        plVar18 = (longlong *)*puVar2;
      }
      uVar3 = local_res20;
      plVar18 = plVar18 + 1;
      lVar20 = (longlong)iVar22;
      if (0 < lVar20) {
        lVar7 = 8 - (longlong)plVar18;
        do {
          lVar6 = FUN_144f976a0(param_1,*(undefined8 *)
                                         ((undefined *)((longlong)plVar21 + lVar7) +
                                         (longlong)plVar18),uVar3);
          *plVar18 = lVar6;
          plVar18 = plVar18 + 2;
          lVar20 = lVar20 + -1;
          uVar1 = local_res10;
        } while (lVar20 != 0);
      }
    }
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    puVar2 = (undefined8 *)FUN_144befde0(local_res18,0x800000);
    plVar21 = plVar23;
    if (puVar2 != (undefined8 *)0x0) {
      plVar21 = (longlong *)*puVar2;
    }
    local_338[0] = plVar21;
    puVar2 = (undefined8 *)
             FUN_144bf0930(0,(int)(short)*plVar21,(int)*(short *)((longlong)plVar21 + 2),
                           param_1 + 0x58);
    local_370 = 0;
    local_368 = puVar2;
    if (0 < *(short *)((longlong)plVar21 + 4)) {
      lVar20 = (longlong)plVar21 - (longlong)puVar2;
      plVar21 = plVar23;
      do {
        puVar2 = puVar2 + 1;
        local_378 = *(uint **)(lVar20 + (longlong)puVar2);
        lVar7 = FUN_144bf0530(&local_378);
        if (lVar7 != 0) {
          uVar3 = FUN_144f976a0(param_1,*(undefined8 *)(local_378 + 2),local_res20);
          uVar5 = FUN_144bf0530(&local_378);
          local_360 = (undefined1 *)FUN_144bfbd30(uVar5,param_1 + 0x58);
          FUN_144f6faa0(local_268);
          FUN_144f6fee0(local_268,param_1);
          FUN_144f6ff10(local_268,uVar3);
          if ((((*(char *)(param_1 + 4) == '\0') && ((*local_378 >> 0x14 & 1) != 0)) &&
              (puVar8 = (ulonglong *)FUN_144befea0(local_378,0x100000), puVar8 != (ulonglong *)0x0))
             && (*puVar8 != 0)) {
            local_208 = local_208 | 0x100000;
            local_160 = *puVar8 & 0xf0000000;
          }
          FUN_144bf04d0(&local_378,&local_res10);
          if (*(char *)(param_1 + 4) == '\0') {
            uVar12 = (uint)local_res10;
          }
          else {
            pbVar9 = (byte *)FUN_144bf04d0(&local_378,local_328);
            if ((~*pbVar9 & 1) == 0) {
              uVar12 = (uint)local_res10 & 0xffffffdf;
              local_res10 = local_res10 & 0xffffffffffffffdf | 0x10;
              uVar12 = uVar12 | 0x10;
            }
            else {
              local_370 = local_370 + 1;
              uVar12 = (uint)local_res10 & 0xffffffef;
              local_res10 = local_res10 & 0xffffffffffffffef | 0x20;
              uVar12 = uVar12 | 0x20;
            }
          }
          FUN_144f70370(local_268,local_360,0,uVar12);
          local_208 = local_208 | 0x40000;
          local_170 = param_2;
          uVar3 = FUN_144f706a0(local_268,param_1 + 0x58);
          *puVar2 = uVar3;
          FUN_144f6fbe0(local_268);
        }
        uVar12 = (int)plVar21 + 1;
        plVar21 = (longlong *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)*(short *)((longlong)local_338[0] + 4));
    }
    puVar2 = local_368;
    if (*(char *)(param_1 + 4) != '\0') {
      puVar10 = (uint *)(longlong)*(short *)((longlong)local_368 + 4);
      local_378 = puVar10;
      if (0 < (longlong)puVar10) {
        iVar22 = -1;
        do {
          uVar3 = puVar2[(longlong)((longlong)plVar23 + 1)];
          plVar21 = plVar23;
          iVar17 = iVar22;
          if (plVar23 != (longlong *)0x0) {
            do {
              FUN_144bf0750(&local_res10,uVar3);
              puVar10 = local_378;
              if ((local_res10 < 2) ||
                 (FUN_144bf07c0(&local_360,puVar2[(longlong)iVar17 + 1]), puVar10 = local_378,
                 local_360 < (undefined1 *)0x2)) break;
              puVar2[(longlong)((longlong)plVar21 + 1)] = puVar2[(longlong)plVar21];
              plVar21 = (longlong *)((longlong)plVar21 + -1);
              iVar17 = iVar17 + -1;
            } while (0 < (longlong)plVar21);
          }
          iVar22 = iVar22 + 1;
          puVar2[(longlong)((longlong)plVar21 + 1)] = uVar3;
          plVar23 = (longlong *)((longlong)plVar23 + 1);
        } while ((longlong)plVar23 < (longlong)puVar10);
      }
      puVar2 = local_368;
      FUN_144bf09c0(local_368,local_370,*(short *)((longlong)local_338[0] + 4) - local_370);
    }
    puVar4 = (undefined8 *)FUN_144befed0(param_2,0x800000);
    *puVar4 = puVar2;
  }
  uVar1 = 0;
  if (((byte)*param_2 >> 1 & 1) != 0) {
    uVar19 = uVar1;
    if (((*param_2 & 2) != 0) &&
       (puVar8 = (ulonglong *)FUN_144befea0(param_2,2), puVar8 != (ulonglong *)0x0)) {
      uVar19 = *puVar8;
    }
    uVar3 = FUN_144f976a0(param_1,uVar19,local_res20);
    puVar2 = (undefined8 *)FUN_144befed0(param_2,2);
    *puVar2 = uVar3;
  }
  puVar10 = local_res18;
  if ((((uint)*param_2 >> 0x14 & 1) == 0) ||
     (lVar20 = FUN_144befea0(param_2,0x100000), puVar10 = local_res18, lVar20 == 0))
  goto LAB_144f984ad;
  FUN_144f69690(param_2);
  puVar10 = local_res18;
  if (*(char *)(param_1 + 6) == '\0') {
    plVar23 = (longlong *)FUN_144f69110(&local_350,local_res18,&DAT_14c6de6c0);
    puVar2 = (undefined8 *)*plVar23;
    if ((local_340 & 1) != 0) {
      FUN_144be6b30(local_340 & 0xfffffffffffffffe);
    }
    if (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)(param_2,puVar10,param_1 + 8);
      goto LAB_144f984ad;
    }
  }
  uVar19 = uVar1;
  if (((*puVar10 >> 0x14 & 1) != 0) &&
     (puVar8 = (ulonglong *)FUN_144befea0(puVar10,0x100000), puVar8 != (ulonglong *)0x0)) {
    uVar19 = *puVar8;
  }
  uVar11 = *param_2;
  uVar16 = uVar19 & 0xf0000000;
  uVar14 = uVar1;
  if ((uVar11 & 1) != 0) {
    puVar8 = (ulonglong *)FUN_144befea0(param_2,1);
    uVar11 = *param_2;
    if (puVar8 != (ulonglong *)0x0) {
      uVar14 = *puVar8;
    }
  }
  uVar13 = (uint)uVar14;
  uVar12 = uVar13 & 0x1f;
  if (*(char *)(param_1 + 6) == '\0') {
    if ((param_2[1] == 0) && ((uVar11 >> 0x17 & 1) == 0)) {
      if (uVar12 == 2) {
switchD_144f983d2_caseD_4:
        uVar16 = uVar19 & 0xffffffff;
      }
      else if (uVar12 == 3) {
        uVar13 = uVar13 >> 0x10;
        if ((uVar14 & 0x20) == 0) {
          uVar13 = 0;
        }
        if (uVar13 != 0) goto switchD_144f983d2_caseD_4;
        uVar16 = (ulonglong)(*(uint *)(param_1 + 8) & 0xfff) << 0x10 |
                 (ulonglong)(*(uint *)(param_1 + 8) & 0xffff) | uVar19 & 0xf0000000;
      }
      else {
        if ((uVar12 == 4) || (uVar12 == 5)) goto switchD_144f983d2_caseD_4;
        if (uVar12 == 6) {
          uVar16 = (ulonglong)(*(uint *)(param_1 + 8) & 0xfff) << 0x10 |
                   (ulonglong)(*(uint *)(param_1 + 8) & 0xffff) | uVar16;
        }
      }
    }
  }
  else {
    switch(uVar12) {
    case 2:
      uVar16 = uVar16 | 0x10001;
      break;
    case 3:
    case 6:
switchD_144f983d2_caseD_3:
      uVar16 = uVar16 | 0x40004;
      break;
    case 4:
    case 5:
      goto switchD_144f983d2_caseD_4;
    case 8:
      if (uVar13 < 0x100) goto switchD_144f983d2_caseD_3;
    }
  }
  puVar8 = (ulonglong *)FUN_144befed0(param_2,0x100000);
  *puVar8 = (ulonglong)((uint)uVar16 & 0xffff0000) | uVar16 & 0xffff;
  puVar10 = local_res18;
LAB_144f984ad:
  if ((((uint)*param_2 >> 0x19 & 1) != 0) &&
     (lVar20 = FUN_144befea0(param_2,0x2000000), lVar20 != 0)) {
    FUN_144bdf360(local_268);
    if (((*puVar10 >> 0x19 & 1) != 0) &&
       ((plVar23 = (longlong *)FUN_144befea0(puVar10,0x2000000), plVar23 != (longlong *)0x0 &&
        (*plVar23 != 0)))) {
      FUN_144be06b0(local_268,*plVar23,0xffffffff);
    }
    if (*(char *)(param_1 + 7) != '\0') {
      plVar23 = (longlong *)FUN_144f69110(local_320,puVar10,&DAT_14c6df050);
      lVar20 = *plVar23;
      if ((local_310 & 1) != 0) {
        FUN_144be6b30(local_310 & 0xfffffffffffffffe);
      }
      if (lVar20 != 0) {
        FUN_144bdf360(&local_308);
        local_340 = 0;
        puVar2 = (undefined8 *)FUN_144beec10(local_338,lVar20,&DAT_14c6df050);
        local_348 = puVar2[1];
        local_350 = *puVar2;
        if (local_348 != 0) {
          uVar1 = FUN_144befdb0();
        }
        if ((uVar1 & 1) != 0) {
          FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
        }
        if ((local_340 & 1) != 0) {
          uVar19 = local_340 & 0xfffffffffffffffe;
          local_340 = uVar1;
          FUN_144be6b30(uVar19);
          uVar1 = local_340;
        }
        local_340 = uVar1;
        local_360 = &DAT_14996de1b;
        local_358 = &DAT_14996de1b;
        FUN_144f67ce0(&local_350,&local_308,&local_360);
        if ((local_340 & 1) != 0) {
          FUN_144be6b30(local_340 & 0xfffffffffffffffe);
        }
        FUN_144be0720(local_268,local_308,local_300 + -1);
        FUN_144bdf2f0(&local_308);
      }
    }
    uVar3 = FUN_144bfbd30(local_268[0],param_1 + 0x58);
    puVar2 = (undefined8 *)FUN_144befed0(param_2,0x2000000);
    *puVar2 = uVar3;
    FUN_144bdf2f0(local_268);
  }
  return;
}



// FUNCTION 144f98680 FUN_144f98680 body=123 status=ok
// SIG undefined FUN_144f98680(void)

void FUN_144f98680(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f98700 FUN_144f98700 body=123 status=ok
// SIG undefined FUN_144f98700(void)

void FUN_144f98700(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f98780 FUN_144f98780 body=160 status=ok
// SIG undefined FUN_144f98780(void)

undefined8 FUN_144f98780(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int local_res8 [2];
  
  FUN_144f98bf0(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar3 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144f99130(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_2;
      puVar2[1] = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
    uVar1 = 1;
  }
  else {
    *(undefined8 *)(*param_1 + 8 + (longlong)local_res8[0] * 0x10) = *param_3;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144f98820 FUN_144f98820 body=827 status=ok
// SIG undefined FUN_144f98820(void)

undefined8 * FUN_144f98820(undefined8 *param_1)

{
  *param_1 = 0x410000d;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2f] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x36] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x3d] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x4b] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x52] = 0;
  param_1[0x4e] = 0;
  param_1[7] = 0x410000d;
  param_1[0xe] = 0x410000d;
  param_1[0x15] = 0x410000d;
  param_1[0x1c] = 0x410000d;
  param_1[0x23] = 0x410000d;
  param_1[0x2a] = 0x410000d;
  param_1[0x31] = 0x410000d;
  param_1[0x38] = 0x410000d;
  param_1[0x3f] = 0x410000d;
  param_1[0x46] = 0x410000d;
  param_1[0x4d] = 0x410000d;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x59] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x60] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x54] = 0x410000d;
  param_1[0x5b] = 0x410000d;
  param_1[0x62] = 0x4000008;
  param_1[0x66] = 0x4000008;
  param_1[0x6a] = 0x4000008;
  param_1[0x6e] = 0x4000008;
  return param_1;
}



// FUNCTION 144f98b60 FUN_144f98b60 body=140 status=ok
// SIG undefined FUN_144f98b60(void)

int * FUN_144f98b60(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_144f98de0();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144f99230(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
      puVar1[1] = *param_4;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 144f98bf0 FUN_144f98bf0 body=291 status=ok
// SIG undefined FUN_144f98bf0(void)

int * FUN_144f98bf0(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = 0xffffffff;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar6 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar6)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  if (((bool)(bVar4 & bVar3)) && ((uint)uVar6 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  if (*param_3 != 0) {
    uVar5 = FUN_144bea740();
    uVar7 = (ulonglong)uVar5;
  }
  iVar8 = *(int *)(param_1[2] + 4 + (uVar7 & *(uint *)(param_1 + 3)) * 8);
  piVar1 = (int *)(param_1[2] + (uVar7 & *(uint *)(param_1 + 3)) * 8);
  do {
    if (iVar8 < 0) {
      lVar2 = param_1[1];
      *piVar1 = (int)uVar7;
      piVar1[1] = (int)lVar2;
      iVar8 = (int)param_1[1];
LAB_144f98ce3:
      param_2[1] = (int)((longlong)piVar1 - param_1[2] >> 3);
      *param_2 = iVar8;
      return param_2;
    }
    if (*piVar1 == (int)uVar7) {
      lVar2 = *(longlong *)(*param_1 + (longlong)piVar1[1] * 0x10);
      if ((lVar2 == *param_3) ||
         (((lVar2 != 0 && (*param_3 != 0)) && (iVar8 = FUN_144bfb930(), iVar8 == 0)))) {
        iVar8 = piVar1[1];
        goto LAB_144f98ce3;
      }
    }
    lVar2 = param_1[2];
    uVar6 = ((longlong)piVar1 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar8 = *(int *)(lVar2 + 4 + uVar6 * 8);
    piVar1 = (int *)(lVar2 + uVar6 * 8);
  } while( true );
}



// FUNCTION 144f98d20 FUN_144f98d20 body=178 status=ok
// SIG undefined FUN_144f98d20(void)

int * FUN_144f98d20(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*param_2 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar3 = FUN_144bea740();
    uVar6 = (ulonglong)uVar3;
  }
  iVar4 = *(int *)(param_1[2] + 4 + (*(uint *)(param_1 + 3) & uVar6) * 8);
  piVar1 = (int *)(param_1[2] + (*(uint *)(param_1 + 3) & uVar6) * 8);
  do {
    if (iVar4 < 0) {
      return (int *)0x0;
    }
    if (*piVar1 == (int)uVar6) {
      lVar2 = *(longlong *)(*param_1 + (longlong)piVar1[1] * 0x10);
      if (lVar2 == *param_2) {
        return piVar1;
      }
      if (((lVar2 != 0) && (*param_2 != 0)) && (iVar4 = FUN_144bfb930(), iVar4 == 0)) {
        return piVar1;
      }
    }
    lVar2 = param_1[2];
    uVar5 = ((longlong)piVar1 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar4 = *(int *)(lVar2 + 4 + uVar5 * 8);
    piVar1 = (int *)(lVar2 + uVar5 * 8);
  } while( true );
}



// FUNCTION 144f98de0 FUN_144f98de0 body=302 status=ok
// SIG undefined FUN_144f98de0(void)

uint * FUN_144f98de0(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f98ee6:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f98ee6;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f98f10 FUN_144f98f10 body=258 status=ok
// SIG undefined FUN_144f98f10(void)

void FUN_144f98f10(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f99020 FUN_144f99020 body=266 status=ok
// SIG undefined FUN_144f99020(void)

void FUN_144f99020(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f99130 FUN_144f99130 body=243 status=ok
// SIG undefined FUN_144f99130(void)

void FUN_144f99130(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f99230 FUN_144f99230 body=243 status=ok
// SIG undefined FUN_144f99230(void)

void FUN_144f99230(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f99330 FUN_144f99330 body=435 status=ok
// SIG undefined FUN_144f99330(void)

void FUN_144f99330(longlong *param_1,uint param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint local_res10 [2];
  undefined4 uStack_24;
  
  plVar1 = (longlong *)param_1[0x22];
  iVar11 = (int)param_1[1] + 1;
  lVar2 = plVar1[4];
  lVar10 = plVar1[2];
  lVar3 = *plVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
    FUN_144f99690(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  puVar8 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = CONCAT44(uStack_24,1);
    puVar8[1] = (lVar2 - lVar10) + lVar3;
  }
  *(int *)(param_1 + 1) = iVar11;
  puVar4 = (ulonglong *)param_1[0x22];
  local_res10[0] = 0xffffffff;
  uVar5 = *puVar4;
  if (puVar4[1] < uVar5 + 4) {
    FUN_144beb1c0(puVar4,local_res10,4);
  }
  else {
    FUN_144b3d470();
    *puVar4 = uVar5 + 4;
  }
  puVar4 = (ulonglong *)param_1[0x22];
  local_res10[0] =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  uVar5 = *puVar4;
  if (puVar4[1] < uVar5 + 4) {
    FUN_144beb1c0(puVar4,local_res10,4);
  }
  else {
    FUN_144b3d470();
    *puVar4 = uVar5 + 4;
  }
  puVar4 = (ulonglong *)param_1[0x22];
  uVar5 = *puVar4 + (longlong)param_4;
  if (puVar4[1] < uVar5) {
    FUN_144beb1c0(puVar4,param_3,(longlong)param_4);
  }
  else {
    FUN_144b3d470();
    *puVar4 = uVar5;
  }
  puVar8 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
  uVar7 = *puVar8;
  lVar2 = puVar8[1];
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  piVar6 = (int *)param_1[0x22];
  uVar9 = ((piVar6[8] - (int)lVar2) - piVar6[4]) + *piVar6;
  local_res10[0] =
       (uVar9 | (int)uVar7 << 0x1e) >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
       uVar9 * 0x1000000;
  if ((lVar2 - *(longlong *)(piVar6 + 8) < 0) ||
     (lVar10 = (lVar2 - *(longlong *)(piVar6 + 8)) + *(longlong *)(piVar6 + 4),
     *(ulonglong *)(piVar6 + 2) < lVar10 + 4U)) {
    FUN_144beb220(piVar6,lVar2,local_res10,4);
  }
  else {
    FUN_144b3d470(lVar10,local_res10,4);
  }
  return;
}



// FUNCTION 144f994f0 FUN_144f994f0 body=241 status=ok
// SIG undefined FUN_144f994f0(void)

void FUN_144f994f0(longlong *param_1,undefined4 param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_res10 [2];
  undefined4 uStack_14;
  
  plVar1 = (longlong *)param_1[0x22];
  iVar8 = (int)param_1[1] + 1;
  lVar2 = plVar1[4];
  lVar3 = plVar1[2];
  lVar4 = *plVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_144f99690(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  puVar7 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = param_2;
    puVar7[1] = uStack_14;
    *(longlong *)(puVar7 + 2) = (lVar2 - lVar3) + lVar4;
  }
  *(int *)(param_1 + 1) = iVar8;
  puVar5 = (ulonglong *)param_1[0x22];
  local_res10[0] = 0xffffffff;
  uVar6 = *puVar5;
  if (puVar5[1] < uVar6 + 4) {
    FUN_144beb1c0(puVar5,local_res10,4);
  }
  else {
    FUN_144b3d470();
    *puVar5 = uVar6 + 4;
  }
  puVar5 = (ulonglong *)param_1[0x22];
  local_res10[0] =
       param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18;
  uVar6 = *puVar5;
  if (puVar5[1] < uVar6 + 4) {
    FUN_144beb1c0(puVar5,local_res10,4);
  }
  else {
    FUN_144b3d470();
    *puVar5 = uVar6 + 4;
  }
  return;
}



// FUNCTION 144f995f0 FUN_144f995f0 body=146 status=ok
// SIG undefined FUN_144f995f0(void)

void FUN_144f995f0(longlong *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res8 [8];
  
  puVar1 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
  uVar3 = *puVar1;
  lVar4 = puVar1[1];
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  piVar2 = (int *)param_1[0x22];
  uVar5 = ((piVar2[8] - (int)lVar4) - piVar2[4]) + *piVar2;
  local_res8[0] =
       (uVar5 | (int)uVar3 << 0x1e) >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
       uVar5 * 0x1000000;
  if ((-1 < lVar4 - *(longlong *)(piVar2 + 8)) &&
     (lVar6 = (lVar4 - *(longlong *)(piVar2 + 8)) + *(longlong *)(piVar2 + 4),
     lVar6 + 4U <= *(ulonglong *)(piVar2 + 2))) {
    FUN_144b3d470(lVar6,local_res8,4);
    return;
  }
  FUN_144beb220(piVar2,lVar4,local_res8,4);
  return;
}



// FUNCTION 144f99690 FUN_144f99690 body=258 status=ok
// SIG undefined FUN_144f99690(void)

void FUN_144f99690(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f997a0 FUN_144f997a0 body=10 status=ok
// SIG undefined FUN_144f997a0(void)

void FUN_144f997a0(longlong param_1,short param_2,short param_3)

{
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + param_3;
  return;
}



// FUNCTION 144f997b0 FUN_144f997b0 body=3 status=ok
// SIG undefined FUN_144f997b0(void)

undefined8 FUN_144f997b0(void)

{
  return 0;
}



// FUNCTION 144f997c0 FUN_144f997c0 body=71 status=ok
// SIG undefined FUN_144f997c0(void)

undefined8 * FUN_144f997c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f99810 FUN_144f99810 body=57 status=ok
// SIG undefined FUN_144f99810(void)

void FUN_144f99810(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = hkTypeVm::Instruction::vftable;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined2 *)((longlong)param_2 + 10) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    param_2[2] = *(undefined8 *)(param_1 + 0x10);
    *param_2 = hkTypeVm::NopInstruction::vftable;
  }
  return;
}



// FUNCTION 144f99850 FUN_144f99850 body=71 status=ok
// SIG undefined FUN_144f99850(void)

undefined8 * FUN_144f99850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f998a0 FUN_144f998a0 body=32 status=ok
// SIG undefined FUN_144f998a0(void)

undefined8 * FUN_144f998a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 10) = 0;
    param_1[2] = 0;
    *param_1 = hkTypeVm::NopInstruction::vftable;
  }
  return param_1;
}



// FUNCTION 144f998c0 FUN_144f998c0 body=52 status=ok
// SIG undefined FUN_144f998c0(void)

longlong * FUN_144f998c0(longlong *param_1,longlong *param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 != param_2) {
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(*param_2 + 0x10))(param_2,param_1,&local_18);
  }
  return param_1;
}



// FUNCTION 144f99900 FUN_144f99900 body=69 status=ok
// SIG undefined FUN_144f99900(void)

undefined8 FUN_144f99900(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bfbed0(param_1,param_2,0x38);
  if (param_2 != (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 10) = 0;
    param_2[2] = 0;
    *param_2 = hkTypeVm::NopInstruction::vftable;
  }
  return param_1;
}



// FUNCTION 144f99950 FUN_144f99950 body=9 status=ok
// SIG undefined FUN_144f99950(void)

void FUN_144f99950(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f99955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 144f99960 FUN_144f99960 body=52 status=ok
// SIG undefined FUN_144f99960(void)

undefined8 *
FUN_144f99960(undefined8 *param_1,undefined1 param_2,undefined2 param_3,undefined8 param_4,
             undefined2 param_5,undefined8 param_6)

{
  *(undefined2 *)((longlong)param_1 + 10) = param_5;
  *param_1 = hkTypeVm::DefaultInstruction::vftable;
  param_1[3] = param_6;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined2 *)((longlong)param_1 + 0xc) = param_3;
  param_1[2] = 0;
  param_1[4] = param_4;
  return param_1;
}



// FUNCTION 144f999a0 FUN_144f999a0 body=73 status=ok
// SIG undefined FUN_144f999a0(void)

void FUN_144f999a0(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = hkTypeVm::Instruction::vftable;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined2 *)((longlong)param_2 + 10) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    param_2[2] = *(undefined8 *)(param_1 + 0x10);
    *param_2 = hkTypeVm::DefaultInstruction::vftable;
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 144f999f0 FUN_144f999f0 body=71 status=ok
// SIG undefined FUN_144f999f0(void)

undefined8 * FUN_144f999f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144f99a40 FUN_144f99a40 body=91 status=ok
// SIG undefined FUN_144f99a40(void)

void FUN_144f99a40(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = hkTypeVm::Instruction::vftable;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined2 *)((longlong)param_2 + 10) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    param_2[2] = *(undefined8 *)(param_1 + 0x10);
    *param_2 = hkTypeVm::DefaultInstruction::vftable;
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    *param_2 = hkTypeVm::CallInstruction::vftable;
    param_2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 144f99aa0 FUN_144f99aa0 body=71 status=ok
// SIG undefined FUN_144f99aa0(void)

undefined8 * FUN_144f99aa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144f99af0 FUN_144f99af0 body=91 status=ok
// SIG undefined FUN_144f99af0(void)

void FUN_144f99af0(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = hkTypeVm::Instruction::vftable;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined2 *)((longlong)param_2 + 10) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    param_2[2] = *(undefined8 *)(param_1 + 0x10);
    *param_2 = hkTypeVm::DefaultInstruction::vftable;
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    *param_2 = hkTypeVm::ProgramInstruction::vftable;
    param_2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 144f99b50 FUN_144f99b50 body=71 status=ok
// SIG undefined FUN_144f99b50(void)

undefined8 * FUN_144f99b50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144f99ba0 FUN_144f99ba0 body=71 status=ok
// SIG undefined FUN_144f99ba0(void)

undefined8 * FUN_144f99ba0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144f99bf0 FUN_144f99bf0 body=71 status=ok
// SIG undefined FUN_144f99bf0(void)

undefined8 * FUN_144f99bf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144f99c40 FUN_144f99c40 body=39 status=ok
// SIG undefined FUN_144f99c40(void)

undefined8 *
FUN_144f99c40(undefined8 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 1) = 0xd;
  *param_1 = hkTypeVm::BlockInstruction::vftable;
  *(undefined2 *)((longlong)param_1 + 10) = param_3;
  *(undefined2 *)((longlong)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  return param_1;
}



// FUNCTION 144f99c70 FUN_144f99c70 body=63 status=ok
// SIG undefined FUN_144f99c70(void)

void FUN_144f99c70(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = hkTypeVm::Instruction::vftable;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined2 *)((longlong)param_2 + 10) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    param_2[2] = *(undefined8 *)(param_1 + 0x10);
    *param_2 = hkTypeVm::BlockInstruction::vftable;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 144f99cb0 FUN_144f99cb0 body=71 status=ok
// SIG undefined FUN_144f99cb0(void)

undefined8 * FUN_144f99cb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Instruction::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144f99d00 FUN_144f99d00 body=386 status=ok
// SIG undefined FUN_144f99d00(void)

void FUN_144f99d00(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong local_38;
  longlong local_30;
  
  iVar2 = (int)param_2[1];
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar2) {
    FUN_144f9d0d0(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  if ((*(int *)(param_1 + 0x10) < iVar2) || (iVar2 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = iVar2;
  }
  plVar7 = (longlong *)*param_2;
  uVar5 = 0;
  plVar6 = plVar7 + (longlong)(int)param_2[1] * 7;
  uVar4 = uVar5;
  if (plVar7 != plVar6) {
    do {
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar7 = plVar7 + 7;
      uVar8 = (int)uVar4 + (iVar2 + 0xfU & 0xfffffff0);
      uVar4 = (ulonglong)uVar8;
    } while (plVar7 != plVar6);
    uVar4 = 0;
    if (uVar8 != 0) {
      if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < (int)uVar8) {
        FUN_14039ab22(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)(int)uVar8);
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 < (int)uVar8) {
        *(uint *)(param_1 + 0x20) = uVar8;
        if (0 < (int)(uVar8 - iVar2)) {
          uVar4 = (ulonglong)(uVar8 - iVar2);
          puVar3 = (undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x18));
          do {
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 0;
            }
            uVar4 = uVar4 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar4 != 0);
        }
      }
      else if ((int)uVar8 < iVar2) {
        *(uint *)(param_1 + 0x20) = uVar8;
      }
      uVar4 = *(ulonglong *)(param_1 + 0x18);
    }
  }
  uVar9 = uVar5;
  if ((int)param_2[1] < 1) {
    *param_1 = 1;
  }
  else {
    do {
      plVar7 = (longlong *)(*param_2 + uVar9);
      lVar1 = *(longlong *)(param_1 + 8);
      iVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
      local_30 = uVar4 + (longlong)iVar2;
      local_38 = uVar4;
      (**(code **)(*plVar7 + 0x10))(plVar7,(longlong)(int)uVar5 * 0x38 + lVar1,&local_38);
      uVar8 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar8;
      uVar4 = uVar4 + ((longlong)(iVar2 + 0xf) & 0xfffffffffffffff0U);
      uVar9 = uVar9 + 0x38;
    } while ((int)uVar8 < (int)param_2[1]);
    *param_1 = 1;
  }
  return;
}



// FUNCTION 144f99e90 FUN_144f99e90 body=254 status=ok
// SIG undefined FUN_144f99e90(void)

longlong FUN_144f99e90(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  for (iVar3 = 0; iVar3 != iVar1; iVar3 = iVar3 + 1) {
    plVar2 = (longlong *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 8));
    (**(code **)(*plVar2 + 8))(plVar2,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               *(uint *)(param_1 + 0x24) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x38);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144f99f90 FUN_144f99f90 body=121 status=ok
// SIG undefined FUN_144f99f90(void)

undefined4 * FUN_144f99f90(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x1000001;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 1) = 0x101;
  param_1[5] = 0x80000000;
  param_1[9] = 0x80000000;
  uVar1 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 10) = uVar1;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x80000000;
  uVar1 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000000;
  return param_1;
}



// FUNCTION 144f9a010 FUN_144f9a010 body=878 status=ok
// SIG undefined FUN_144f9a010(void)

void FUN_144f9a010(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  
  uVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar1 * 0x10);
    if (lVar9 != 0) {
      iVar2 = *(int *)(lVar9 + 0x10);
      uVar5 = uVar6;
      while (iVar10 = (int)uVar5, iVar10 != iVar2) {
        plVar4 = (longlong *)((longlong)iVar10 * 0x38 + *(longlong *)(lVar9 + 8));
        (**(code **)(*plVar4 + 8))(plVar4,0);
        uVar5 = (ulonglong)(iVar10 + 1);
      }
      *(undefined4 *)(lVar9 + 0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + 0x24)) && (*(longlong *)(lVar9 + 0x18) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar9 + 0x18),
                   *(uint *)(lVar9 + 0x24) & 0x7fffffff);
      }
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined4 *)(lVar9 + 0x24) = 0x80000000;
      *(undefined4 *)(lVar9 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + 0x14)) && (*(longlong *)(lVar9 + 8) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar9 + 8),
                   (ulonglong)(*(uint *)(lVar9 + 0x14) & 0x7fffffff) * 0x38);
      }
      *(undefined8 *)(lVar9 + 8) = 0;
      *(undefined4 *)(lVar9 + 0x14) = 0x80000000;
      (*DAT_14c787678)(0,lVar9,0);
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(*(longlong *)(param_1 + 0x28) + 4) != -2)
        ) && (uVar5 = uVar6, uVar8 = uVar6, 0 < *(int *)(param_1 + 0x30) + 1)) {
      do {
        uVar7 = (int)uVar8 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + -4 + uVar5 + 8) = 0xffffffff;
        uVar5 = uVar5 + 8;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0x30) + 1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)iVar1 * 0x18);
    if (lVar9 != 0) {
      iVar2 = *(int *)(lVar9 + 0x10);
      uVar5 = uVar6;
      while (iVar10 = (int)uVar5, iVar10 != iVar2) {
        plVar4 = (longlong *)((longlong)iVar10 * 0x38 + *(longlong *)(lVar9 + 8));
        (**(code **)(*plVar4 + 8))(plVar4,0);
        uVar5 = (ulonglong)(iVar10 + 1);
      }
      *(undefined4 *)(lVar9 + 0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + 0x24)) && (*(longlong *)(lVar9 + 0x18) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar9 + 0x18),
                   *(uint *)(lVar9 + 0x24) & 0x7fffffff);
      }
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined4 *)(lVar9 + 0x24) = 0x80000000;
      *(undefined4 *)(lVar9 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + 0x14)) && (*(longlong *)(lVar9 + 8) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar9 + 8),
                   (ulonglong)(*(uint *)(lVar9 + 0x14) & 0x7fffffff) * 0x38);
      }
      *(undefined8 *)(lVar9 + 8) = 0;
      *(undefined4 *)(lVar9 + 0x14) = 0x80000000;
      (*DAT_14c787678)(0,lVar9,0);
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (((*(longlong *)(param_1 + 0x48) != 0) && (*(int *)(*(longlong *)(param_1 + 0x48) + 4) != -2)
        ) && (uVar5 = uVar6, 0 < *(int *)(param_1 + 0x50) + 1)) {
      do {
        uVar6 = uVar6 + 8;
        uVar7 = (int)uVar5 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -4 + uVar6) = 0xffffffff;
        uVar5 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0x50) + 1);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x58),
               (ulonglong)(*(uint *)(param_1 + 100) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  FUN_144f9b2f0(param_1 + 0x38);
  FUN_144f9b0b0(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 8);
  lVar9 = lVar3 + (longlong)*(int *)(param_1 + 0x10) * 8;
  while (lVar9 != lVar3) {
    plVar4 = *(longlong **)(lVar9 + -8);
    lVar9 = lVar9 + -8;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 144f9a380 FUN_144f9a380 body=94 status=ok
// SIG undefined FUN_144f9a380(void)

void FUN_144f9a380(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar2) {
    FUN_144f9d3b0((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 144f9a3e0 FUN_144f9a3e0 body=14 status=ok
// SIG undefined FUN_144f9a3e0(void)

undefined1 * FUN_144f9a3e0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puStackX_8;
  undefined8 uStackX_10;
  undefined1 *puStackX_18;
  longlong lStack_38;
  int iStack_30;
  uint uStack_2c;
  
  if (param_2 != param_3) {
    puVar4 = (undefined1 *)FUN_144f9a8f0();
    return puVar4;
  }
  puStackX_8 = param_2;
  lVar5 = FUN_144f9cf30(param_1 + 0x18,&puStackX_8);
  if ((lVar5 != 0) && (-1 < *(int *)(lVar5 + 4))) {
    return *(undefined1 **)
            (*(longlong *)(param_1 + 0x18) + 8 + (longlong)*(int *)(lVar5 + 4) * 0x10);
  }
  uStackX_10 = 0x28;
  puVar4 = (undefined1 *)(*DAT_14c787670)(0,&uStackX_10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"CompiledProgram");
  }
  puVar7 = (undefined1 *)0x0;
  puVar8 = puVar7;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined4 *)(puVar4 + 0x14) = 0x80000000;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined4 *)(puVar4 + 0x20) = 0;
    *(undefined4 *)(puVar4 + 0x24) = 0x80000000;
    puVar8 = puVar4;
  }
  puStackX_8 = puVar8;
  puStackX_18 = param_2;
  FUN_144f9b130(param_1 + 0x18,&puStackX_18,&puStackX_8);
  lStack_38 = 0;
  iStack_30 = 0;
  uStack_2c = 0x80000000;
  piVar6 = (int *)FUN_144f9ab00(param_1,&puStackX_8,&lStack_38,param_2,param_2);
  if (*piVar6 < 0) {
    puStackX_8 = param_2;
    lVar5 = FUN_144f9cf30(param_1 + 0x18,&puStackX_8);
    if (lVar5 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(lVar5 + 4);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar3 * 0x10) = 0;
    puVar4 = puVar8;
  }
  else {
    FUN_144f99d00(puVar8,&lStack_38);
    puVar4 = puVar7;
    puVar7 = puVar8;
  }
  lVar2 = lStack_38;
  lVar5 = (longlong)iStack_30 * 0x38 + lStack_38;
  while (lVar5 != lVar2) {
    plVar1 = (longlong *)(lVar5 + -0x38);
    lVar5 = lVar5 + -0x38;
    (**(code **)(*plVar1 + 8))(lVar5,0);
  }
  iStack_30 = 0;
  if ((-1 < (int)uStack_2c) && (lStack_38 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lStack_38,(ulonglong)(uStack_2c & 0x7fffffff) * 0x38);
  }
  lStack_38 = 0;
  uStack_2c = 0x80000000;
  if (puVar4 != (undefined1 *)0x0) {
    FUN_144f99e90(puVar4,1);
  }
  return puVar7;
}



// FUNCTION 144f9a3f0 FUN_144f9a3f0 body=742 status=ok
// SIG undefined FUN_144f9a3f0(void)

void FUN_144f9a3f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x58);
  plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x60) * 2;
  if (plVar7 == plVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return;
  }
  do {
    if (*plVar7 == plVar7[1]) {
      lVar2 = FUN_144f9cf30((longlong *)(param_1 + 0x18));
      if (lVar2 == 0) {
        uVar5 = 0xffffffff;
        iVar8 = -1;
      }
      else {
        iVar8 = *(int *)(lVar2 + 4);
        uVar5 = (uint)(lVar2 - *(longlong *)(param_1 + 0x28) >> 3);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar8 * 0x10);
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x10);
        for (iVar4 = 0; iVar4 != iVar1; iVar4 = iVar4 + 1) {
          plVar3 = (longlong *)((longlong)iVar4 * 0x38 + *(longlong *)(lVar2 + 8));
          (**(code **)(*plVar3 + 8))(plVar3,0);
        }
        *(undefined4 *)(lVar2 + 0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + 0x24)) && (*(longlong *)(lVar2 + 0x18) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(lVar2 + 0x18),
                     *(uint *)(lVar2 + 0x24) & 0x7fffffff);
        }
        *(undefined8 *)(lVar2 + 0x18) = 0;
        *(undefined4 *)(lVar2 + 0x24) = 0x80000000;
        *(undefined4 *)(lVar2 + 0x10) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + 0x14)) && (*(longlong *)(lVar2 + 8) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(lVar2 + 8),
                     (ulonglong)(*(uint *)(lVar2 + 0x14) & 0x7fffffff) * 0x38);
        }
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined4 *)(lVar2 + 0x14) = 0x80000000;
        (*DAT_14c787678)(0,lVar2,0);
      }
      plVar3 = (longlong *)(param_1 + 0x18);
      if ((*(uint *)(param_1 + 0x30) < uVar5) ||
         (lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)(int)uVar5 * 8,
         *(int *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)(int)uVar5 * 8) != iVar8)) {
        lVar2 = FUN_144f9cf30(plVar3,(longlong)iVar8 * 0x10 + *plVar3);
      }
      FUN_144f9af80(plVar3,lVar2);
    }
    else {
      lVar2 = FUN_144f9cfd0((longlong *)(param_1 + 0x38),plVar7);
      if (lVar2 == 0) {
        uVar5 = 0xffffffff;
        iVar8 = -1;
      }
      else {
        iVar8 = *(int *)(lVar2 + 4);
        uVar5 = (uint)(lVar2 - *(longlong *)(param_1 + 0x48) >> 3);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)iVar8 * 0x18);
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x10);
        for (iVar4 = 0; iVar4 != iVar1; iVar4 = iVar4 + 1) {
          plVar3 = (longlong *)((longlong)iVar4 * 0x38 + *(longlong *)(lVar2 + 8));
          (**(code **)(*plVar3 + 8))(plVar3,0);
        }
        *(undefined4 *)(lVar2 + 0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + 0x24)) && (*(longlong *)(lVar2 + 0x18) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(lVar2 + 0x18),
                     *(uint *)(lVar2 + 0x24) & 0x7fffffff);
        }
        *(undefined8 *)(lVar2 + 0x18) = 0;
        *(undefined4 *)(lVar2 + 0x24) = 0x80000000;
        *(undefined4 *)(lVar2 + 0x10) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + 0x14)) && (*(longlong *)(lVar2 + 8) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(lVar2 + 8),
                     (ulonglong)(*(uint *)(lVar2 + 0x14) & 0x7fffffff) * 0x38);
        }
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined4 *)(lVar2 + 0x14) = 0x80000000;
        (*DAT_14c787678)(0,lVar2,0);
      }
      plVar3 = (longlong *)(param_1 + 0x38);
      if ((*(uint *)(param_1 + 0x50) < uVar5) ||
         (lVar2 = *(longlong *)(param_1 + 0x48) + (longlong)(int)uVar5 * 8,
         *(int *)(*(longlong *)(param_1 + 0x48) + 4 + (longlong)(int)uVar5 * 8) != iVar8)) {
        lVar2 = FUN_144f9cfd0(plVar3,*plVar3 + (longlong)iVar8 * 0x18);
      }
      FUN_144f9b1d0(plVar3,lVar2);
    }
    plVar7 = plVar7 + 2;
  } while (plVar7 != plVar6);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 144f9a6e0 FUN_144f9a6e0 body=518 status=ok
// SIG undefined FUN_144f9a6e0(void)

undefined1 * FUN_144f9a6e0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_res8;
  undefined8 local_res10;
  undefined1 *local_res18;
  longlong local_38;
  int local_30;
  uint local_2c;
  
  local_res8 = param_2;
  lVar4 = FUN_144f9cf30(param_1 + 0x18,&local_res8);
  if ((lVar4 != 0) && (-1 < *(int *)(lVar4 + 4))) {
    return *(undefined1 **)
            (*(longlong *)(param_1 + 0x18) + 8 + (longlong)*(int *)(lVar4 + 4) * 0x10);
  }
  local_res10 = 0x28;
  puVar5 = (undefined1 *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"CompiledProgram");
  }
  puVar7 = (undefined1 *)0x0;
  puVar8 = puVar7;
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)(puVar5 + 0x14) = 0x80000000;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined4 *)(puVar5 + 0x20) = 0;
    *(undefined4 *)(puVar5 + 0x24) = 0x80000000;
    puVar8 = puVar5;
  }
  local_res8 = puVar8;
  local_res18 = param_2;
  FUN_144f9b130(param_1 + 0x18,&local_res18,&local_res8);
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  piVar6 = (int *)FUN_144f9ab00(param_1,&local_res8,&local_38,param_2,param_2);
  if (*piVar6 < 0) {
    local_res8 = param_2;
    lVar4 = FUN_144f9cf30(param_1 + 0x18,&local_res8);
    if (lVar4 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(lVar4 + 4);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar3 * 0x10) = 0;
    puVar5 = puVar8;
  }
  else {
    FUN_144f99d00(puVar8,&local_38);
    puVar5 = puVar7;
    puVar7 = puVar8;
  }
  lVar2 = local_38;
  lVar4 = (longlong)local_30 * 0x38 + local_38;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -0x38);
    lVar4 = lVar4 + -0x38;
    (**(code **)(*plVar1 + 8))(lVar4,0);
  }
  local_30 = 0;
  if ((-1 < (int)local_2c) && (local_38 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(local_2c & 0x7fffffff) * 0x38);
  }
  local_38 = 0;
  local_2c = 0x80000000;
  if (puVar5 != (undefined1 *)0x0) {
    FUN_144f99e90(puVar5,1);
  }
  return puVar7;
}



// FUNCTION 144f9a8f0 FUN_144f9a8f0 body=522 status=ok
// SIG undefined FUN_144f9a8f0(void)

undefined1 * FUN_144f9a8f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_res8;
  undefined8 local_res10;
  longlong local_48;
  int local_40;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = param_2;
  local_30 = param_3;
  lVar4 = FUN_144f9cfd0(param_1 + 0x38,&local_38);
  if ((lVar4 != 0) && (-1 < *(int *)(lVar4 + 4))) {
    return *(undefined1 **)
            (*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)*(int *)(lVar4 + 4) * 0x18);
  }
  local_res10 = 0x28;
  puVar5 = (undefined1 *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"CompiledProgram");
  }
  puVar7 = (undefined1 *)0x0;
  puVar8 = puVar7;
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)(puVar5 + 0x14) = 0x80000000;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined4 *)(puVar5 + 0x20) = 0;
    *(undefined4 *)(puVar5 + 0x24) = 0x80000000;
    puVar8 = puVar5;
  }
  local_res8 = puVar8;
  FUN_144f9b370(param_1 + 0x38,&local_38,&local_res8);
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  piVar6 = (int *)FUN_144f9ab00(param_1,&local_res8,&local_48,param_2,param_3);
  if (*piVar6 < 0) {
    lVar4 = FUN_144f9cfd0(param_1 + 0x38,&local_38);
    if (lVar4 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(lVar4 + 4);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)iVar3 * 0x18) = 0;
    puVar5 = puVar8;
  }
  else {
    FUN_144f99d00(puVar8,&local_48);
    puVar5 = puVar7;
    puVar7 = puVar8;
  }
  lVar2 = local_48;
  lVar4 = (longlong)local_40 * 0x38 + local_48;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -0x38);
    lVar4 = lVar4 + -0x38;
    (**(code **)(*plVar1 + 8))(lVar4,0);
  }
  local_40 = 0;
  if ((-1 < (int)local_3c) && (local_48 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) * 0x38);
  }
  local_48 = 0;
  local_3c = 0x80000000;
  if (puVar5 != (undefined1 *)0x0) {
    FUN_144f99e90(puVar5,1);
  }
  return puVar7;
}



// FUNCTION 144f9ab00 FUN_144f9ab00 body=1151 status=ok
// SIG undefined FUN_144f9ab00(void)

undefined4 *
FUN_144f9ab00(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_268;
  code *local_260;
  longlong *local_258;
  code *local_250;
  longlong *local_248;
  code *local_240;
  longlong *local_238;
  code *local_230;
  longlong *local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  lVar7 = param_5;
  local_1e8 = param_5;
  local_200 = param_1;
  local_1f8 = param_3;
  local_1f0 = param_4;
  piVar3 = (int *)FUN_144f9b810(&local_200,&param_5,param_5,0,param_4,0);
  if (*piVar3 < 0) {
LAB_144f9adff:
    *param_2 = 0x80040200;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 8);
    puVar1 = puVar8 + *(int *)(param_1 + 0x10);
    for (; local_res8 = param_4, local_res20 = param_3, puVar8 != puVar1; puVar8 = puVar8 + 1) {
      piVar3 = (int *)(**(code **)(*(longlong *)*puVar8 + 0x10))
                                ((longlong *)*puVar8,&param_5,param_3,param_4,lVar7);
      if (*piVar3 < 0) {
        if ((3 < DAT_14c799ff8) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
          cVar2 = FUN_144bdbf80();
          if (cVar2 == '\0') {
            local_res18 = lVar7;
            param_5 = param_1;
            uVar6 = FUN_144bdc640(local_1e0);
            local_268 = 4;
            local_260 = FUN_144f9d500;
            local_248 = &local_res8;
            local_258 = &param_5;
            local_250 = FUN_144bf0db0;
            local_240 = FUN_144bf0db0;
            local_238 = &local_res18;
            local_230 = FUN_144f9d530;
            local_228 = &local_res20;
            lVar7 = FUN_144bdc480(uVar6,"{}, Compiler could not convert types {}->{}, p = {}",
                                  &local_268,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x17f;
            FUN_144bdc690(local_1e0);
          }
          else {
            local_210 = lVar7;
            local_220 = param_1;
            local_218 = param_4;
            local_208 = param_3;
            uVar6 = FUN_144bdc810(local_190,&DAT_14c799fa8,4);
            local_268 = 4;
            local_260 = FUN_144f9d500;
            local_248 = &local_218;
            local_258 = &local_220;
            local_250 = FUN_144bf0db0;
            local_240 = FUN_144bf0db0;
            local_238 = &local_210;
            local_230 = FUN_144f9d530;
            local_228 = &local_208;
            lVar7 = FUN_144bdc480(uVar6,"{}, Compiler could not convert types {}->{}, p = {}",
                                  &local_268,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x17f;
            FUN_144bdc8a0(local_190);
          }
        }
        goto LAB_144f9adff;
      }
    }
    if (((param_4 != 0) &&
        (puVar4 = (uint *)FUN_144b45d50(param_4,&param_5), (*puVar4 >> 0xc & 1) != 0)) ||
       (puVar4 = (uint *)FUN_144b45d50(lVar7,&param_5), (*puVar4 >> 0xc & 1) != 0)) {
      iVar9 = *(int *)(param_1 + 0x60) + 1;
      if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar9) {
        FUN_144f9d560(param_1 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      plVar5 = (longlong *)
               ((longlong)*(int *)(param_1 + 0x60) * 0x10 + *(longlong *)(param_1 + 0x58));
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = param_4;
        plVar5[1] = lVar7;
      }
      *(int *)(param_1 + 0x60) = iVar9;
    }
    if ((3 < DAT_14c799ff8) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
      cVar2 = FUN_144bdbf80();
      if (cVar2 == '\0') {
        local_res18 = lVar7;
        param_5 = param_1;
        uVar6 = FUN_144bdc640(local_1e0);
        local_268 = 4;
        local_260 = FUN_144f9d500;
        local_248 = &local_res8;
        local_258 = &param_5;
        local_250 = FUN_144bf0db0;
        local_240 = FUN_144bf0db0;
        local_238 = &local_res18;
        local_230 = FUN_144f9d530;
        local_228 = &local_res20;
        lVar7 = FUN_144bdc480(uVar6,"{} Type newly compiled {}->{}, p = {}",&local_268,0);
        *(char **)(lVar7 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x189;
        FUN_144bdc690(local_1e0);
        *param_2 = 0;
        return param_2;
      }
      local_218 = lVar7;
      local_220 = param_3;
      local_210 = param_4;
      local_208 = param_1;
      uVar6 = FUN_144bdc810(local_190,&DAT_14c799fa8,4);
      local_268 = 4;
      local_260 = FUN_144f9d500;
      local_248 = &local_210;
      local_258 = &local_208;
      local_250 = FUN_144bf0db0;
      local_240 = FUN_144bf0db0;
      local_238 = &local_218;
      local_230 = FUN_144f9d530;
      local_228 = &local_220;
      lVar7 = FUN_144bdc480(uVar6,"{} Type newly compiled {}->{}, p = {}",&local_268,0);
      *(char **)(lVar7 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x189;
      FUN_144bdc8a0(local_190);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144f9af80 FUN_144f9af80 body=304 status=ok
// SIG undefined FUN_144f9af80(void)

void FUN_144f9af80(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar2 = param_2[1];
  if (uVar2 != (int)param_1[1] - 1U) {
    lVar5 = FUN_144f9cf30(param_1,*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar5 = param_1[1];
  uVar4 = (int)lVar5 - 1;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != uVar2) {
    puVar7 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + *param_1);
    puVar8 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)lVar5 * 0x10);
    if (puVar7 != puVar8) {
      lVar9 = (longlong)puVar8 - (longlong)puVar7;
      lVar5 = 2;
      do {
        *puVar7 = *(undefined8 *)(lVar9 + (longlong)puVar7);
        puVar7 = puVar7 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  lVar5 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & uVar10;
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = lVar5 + ((ulonglong)*puVar1 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & uVar10;
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144f9b0b0 FUN_144f9b0b0 body=123 status=ok
// SIG undefined FUN_144f9b0b0(void)

void FUN_144f9b0b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f9b130 FUN_144f9b130 body=160 status=ok
// SIG undefined FUN_144f9b130(void)

undefined8 FUN_144f9b130(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int local_res8 [2];
  
  FUN_144f9ce00(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar3 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144f9d7a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_2;
      puVar2[1] = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
    uVar1 = 1;
  }
  else {
    *(undefined8 *)(*param_1 + 8 + (longlong)local_res8[0] * 0x10) = *param_3;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144f9b1d0 FUN_144f9b1d0 body=274 status=ok
// SIG undefined FUN_144f9b1d0(void)

void FUN_144f9b1d0(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = param_2[1];
  if (uVar4 != (int)param_1[1] - 1U) {
    lVar8 = FUN_144f9cfd0(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0x18);
    *(uint *)(lVar8 + 4) = uVar4;
  }
  lVar8 = param_1[1];
  uVar7 = (int)lVar8 - 1;
  *(uint *)(param_1 + 1) = uVar7;
  if (uVar7 != uVar4) {
    puVar1 = (undefined8 *)(*param_1 + ((longlong)(int)lVar8 + -1) * 0x18);
    puVar2 = (undefined8 *)(*param_1 + (longlong)(int)uVar4 * 0x18);
    if ((puVar2 != puVar1) && (puVar2 != (undefined8 *)0x0)) {
      uVar6 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = puVar1[2];
    }
  }
  lVar8 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar9 = ((longlong)param_2 - lVar8 >> 3) + 1U & uVar10;
  puVar3 = (uint *)(lVar8 + uVar9 * 8);
  iVar5 = *(int *)(lVar8 + 4 + uVar9 * 8);
  while (-1 < iVar5) {
    lVar8 = lVar8 + ((ulonglong)*puVar3 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar8 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar3 - lVar8 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      param_2 = puVar3;
    }
    lVar8 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar9 = ((longlong)puVar3 - lVar8 >> 3) + 1U & uVar10;
    puVar3 = (uint *)(lVar8 + uVar9 * 8);
    iVar5 = *(int *)(lVar8 + 4 + uVar9 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144f9b2f0 FUN_144f9b2f0 body=125 status=ok
// SIG undefined FUN_144f9b2f0(void)

void FUN_144f9b2f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f9b370 FUN_144f9b370 body=167 status=ok
// SIG undefined FUN_144f9b370(void)

ulonglong FUN_144f9b370(ulonglong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int local_res8 [2];
  
  FUN_144f9cc70(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar4 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_144f9d670(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    uVar3 = *param_1;
    puVar1 = (undefined8 *)(uVar3 + (longlong)(int)param_1[1] * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      uVar3 = *param_3;
      puVar1[2] = uVar3;
    }
    *(int *)(param_1 + 1) = iVar4;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    uVar3 = *param_3;
    *(ulonglong *)(*param_1 + 0x10 + (longlong)local_res8[0] * 0x18) = uVar3;
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}



// FUNCTION 144f9b420 FUN_144f9b420 body=971 status=ok
// SIG undefined FUN_144f9b420(void)

undefined4 *
FUN_144f9b420(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
             longlong param_5,undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  puVar3 = (uint *)FUN_144bef800(param_3,local_res8);
  switch(*puVar3 & 0x1f) {
  case 0:
    FUN_144f9b8d0(param_1,param_2,param_3,param_4,param_5,param_6);
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar2)();
    return puVar4;
  case 1:
    FUN_144f9b8e0(param_1,param_2,param_3,param_4,param_5,param_6);
    return param_2;
  case 2:
    plVar6 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar6[1];
    if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar1 + 1) {
      FUN_144f9d210(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
    }
    puVar5 = (undefined8 *)((longlong)(int)plVar6[1] * 0x38 + *plVar6);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = hkTypeVm::NopInstruction::vftable;
      *(undefined4 *)((longlong)puVar5 + 10) = 0;
      puVar5[2] = 0;
    }
    *(int *)(plVar6 + 1) = iVar1 + 1;
    plVar6 = (longlong *)((longlong)iVar1 * 0x38 + *plVar6);
    (**(code **)(*plVar6 + 8))(plVar6,0);
    if (plVar6 == (longlong *)0x0) goto LAB_144f9b72b;
    *(undefined1 *)(plVar6 + 1) = 1;
    break;
  case 3:
    plVar6 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar6[1];
    if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar1 + 1) {
      FUN_144f9d210(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
    }
    puVar5 = (undefined8 *)((longlong)(int)plVar6[1] * 0x38 + *plVar6);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = hkTypeVm::NopInstruction::vftable;
      *(undefined4 *)((longlong)puVar5 + 10) = 0;
      puVar5[2] = 0;
    }
    *(int *)(plVar6 + 1) = iVar1 + 1;
    plVar6 = (longlong *)((longlong)iVar1 * 0x38 + *plVar6);
    (**(code **)(*plVar6 + 8))(plVar6,0);
    if (plVar6 == (longlong *)0x0) goto LAB_144f9b72b;
    *(undefined1 *)(plVar6 + 1) = 5;
    break;
  case 4:
    plVar6 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar6[1];
    if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar1 + 1) {
      FUN_144f9d210(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
    }
    puVar5 = (undefined8 *)((longlong)(int)plVar6[1] * 0x38 + *plVar6);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = hkTypeVm::NopInstruction::vftable;
      *(undefined4 *)((longlong)puVar5 + 10) = 0;
      puVar5[2] = 0;
    }
    *(int *)(plVar6 + 1) = iVar1 + 1;
    plVar6 = (longlong *)((longlong)iVar1 * 0x38 + *plVar6);
    (**(code **)(*plVar6 + 8))(plVar6,0);
    if (plVar6 == (longlong *)0x0) goto LAB_144f9b72b;
    *(undefined1 *)(plVar6 + 1) = 2;
    break;
  case 5:
    plVar6 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar6[1];
    if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar1 + 1) {
      FUN_144f9d210(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
    }
    puVar5 = (undefined8 *)((longlong)(int)plVar6[1] * 0x38 + *plVar6);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = hkTypeVm::NopInstruction::vftable;
      *(undefined4 *)((longlong)puVar5 + 10) = 0;
      puVar5[2] = 0;
    }
    *(int *)(plVar6 + 1) = iVar1 + 1;
    plVar6 = (longlong *)((longlong)iVar1 * 0x38 + *plVar6);
    (**(code **)(*plVar6 + 8))(plVar6,0);
    if (plVar6 == (longlong *)0x0) goto LAB_144f9b72b;
    *(undefined1 *)(plVar6 + 1) = 3;
    break;
  case 6:
    plVar6 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar6[1];
    if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar1 + 1) {
      FUN_144f9d210(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
    }
    puVar5 = (undefined8 *)((longlong)(int)plVar6[1] * 0x38 + *plVar6);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = hkTypeVm::NopInstruction::vftable;
      *(undefined4 *)((longlong)puVar5 + 10) = 0;
      puVar5[2] = 0;
    }
    *(int *)(plVar6 + 1) = iVar1 + 1;
    plVar6 = (longlong *)((longlong)iVar1 * 0x38 + *plVar6);
    (**(code **)(*plVar6 + 8))(plVar6,0);
    if (plVar6 == (longlong *)0x0) goto LAB_144f9b72b;
    *(undefined1 *)(plVar6 + 1) = 4;
    break;
  case 7:
    FUN_144f9bb40(param_1,param_2,param_3,param_4,param_5,param_6);
    return param_2;
  case 8:
    FUN_144f9bf90(param_1,param_2,param_3,param_4,param_5,param_6);
    return param_2;
  default:
    FUN_144bfc170(0xfdbd9f9,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x1b,"Bad type visitor switch");
    *param_2 = 0;
    return param_2;
  }
  *(undefined2 *)((longlong)plVar6 + 10) = (undefined2)param_6;
  *plVar6 = (longlong)hkTypeVm::DefaultInstruction::vftable;
  plVar6[4] = param_3;
  plVar6[3] = param_5;
  plVar6[2] = 0;
  *(short *)((longlong)plVar6 + 0xc) = (short)param_4;
LAB_144f9b72b:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f9b810 FUN_144f9b810 body=191 status=ok
// SIG undefined FUN_144f9b810(void)

undefined4 *
FUN_144f9b810(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  lVar2 = param_5;
  if ((param_5 == 0) && (*(char *)*param_1 == '\0')) {
    *param_2 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_144bef430(param_3,local_38,&DAT_14c6df940);
    puVar1 = (undefined8 *)*plVar3;
    if ((local_28 & 1) != 0) {
      FUN_144be6b30(local_28 & 0xfffffffffffffffe);
    }
    if (puVar1 == (undefined8 *)0x0) {
      FUN_144f9b420(param_1,param_2,param_3,param_4,lVar2,param_6);
    }
    else {
      puVar4 = (undefined4 *)(*(code *)*puVar1)(&param_5,param_1[1]);
      *param_2 = *puVar4;
    }
  }
  return param_2;
}



// FUNCTION 144f9b8d0 FUN_144f9b8d0 body=1 status=ok
// SIG undefined FUN_144f9b8d0(void)

void FUN_144f9b8d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144f9b8e0 FUN_144f9b8e0 body=593 status=ok
// SIG undefined FUN_144f9b8e0(void)

undefined4 *
FUN_144f9b8e0(undefined8 *param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
             longlong param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong local_res8;
  undefined8 *local_b8;
  undefined8 local_b0;
  ulonglong *local_a8;
  undefined8 local_a0;
  code *local_98;
  char *local_90;
  code *local_88;
  undefined8 *local_80;
  undefined1 local_78 [80];
  
  lVar4 = param_5;
  if (param_5 == param_1[2]) {
    local_b0 = (code *)CONCAT44(param_6,param_4);
    local_b8 = param_1;
    FUN_144f9c170(param_1,&local_res8,param_3,&local_b8);
    param_5._0_4_ = 0x80040200;
    if (1 < local_res8) {
      uVar2 = 0x80040200;
      if (DAT_14c799ff8 != '\0') {
        lVar4 = FUN_144bdc640(local_78,&DAT_14c799fa8,1);
        local_a0 = 2;
        *(char **)(lVar4 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
        local_98 = FUN_144be33f0;
        local_90 = "failedField";
        local_88 = FUN_144bdef40;
        local_80 = &param_5;
        *(undefined8 *)(lVar4 + 0x40) = 0x9d;
        uVar5 = FUN_144bdc480(lVar4,"HK_RETURN_RES_IF({}) returning {}. ",&local_a0,0);
        local_b8 = (undefined8 *)0x1;
        local_b0 = FUN_144f82010;
        local_a8 = &local_res8;
        FUN_144bdc480(uVar5,"Failed to clone opaque field \'{}\'.",&local_b8,0);
        FUN_144bdc690(local_78);
        uVar2 = (undefined4)param_5;
      }
      *param_2 = uVar2;
      return param_2;
    }
  }
  else {
    if (param_5 == param_3) {
      lVar3 = FUN_144f9a6e0();
    }
    else {
      lVar3 = FUN_144f9a8f0(*param_1,param_5);
    }
    if (lVar3 == 0) {
      *param_2 = 0x80040200;
      return param_2;
    }
    plVar7 = (longlong *)param_1[1];
    iVar1 = (int)plVar7[1];
    if ((int)(*(uint *)((longlong)plVar7 + 0xc) & 0x7fffffff) < iVar1 + 1) {
      FUN_144f9d210(plVar7,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
    }
    puVar6 = (undefined8 *)((longlong)(int)plVar7[1] * 0x38 + *plVar7);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 10) = 0;
      puVar6[2] = 0;
      *puVar6 = hkTypeVm::NopInstruction::vftable;
    }
    *(int *)(plVar7 + 1) = iVar1 + 1;
    plVar7 = (longlong *)((longlong)iVar1 * 0x38 + *plVar7);
    (**(code **)(*plVar7 + 8))(plVar7,0);
    if (plVar7 != (longlong *)0x0) {
      *(undefined2 *)((longlong)plVar7 + 10) = (undefined2)param_6;
      *plVar7 = (longlong)hkTypeVm::RecordInstruction::vftable;
      *(undefined1 *)(plVar7 + 1) = 0xc;
      *(short *)((longlong)plVar7 + 0xc) = (short)param_4;
      plVar7[2] = 0;
      plVar7[3] = lVar4;
      plVar7[4] = param_3;
      plVar7[5] = lVar3;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f9bb40 FUN_144f9bb40 body=1104 status=ok
// SIG undefined FUN_144f9bb40(void)

int * FUN_144f9bb40(undefined8 *param_1,int *param_2,longlong param_3,undefined4 param_4,
                   longlong param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int local_res8 [2];
  ulonglong local_res18 [2];
  undefined8 *local_d8;
  undefined8 local_d0;
  ulonglong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  code *local_b0;
  char *local_a8;
  code *local_a0;
  int *local_98;
  undefined1 local_90 [88];
  
  if ((param_3 == param_1[3]) || (param_5 == param_1[2])) {
    local_d8 = param_1;
    if (param_5 == param_3) {
      local_d0 = (code *)CONCAT44(param_6,param_4);
      FUN_144f9c330(param_1,local_res18,param_3,&local_d8);
      local_res8[0] = -0x7ffbfe00;
      if (1 < local_res18[0]) {
        iVar1 = -0x7ffbfe00;
        if (DAT_14c799ff8 != '\0') {
          lVar2 = FUN_144bdc640(local_90,&DAT_14c799fa8,1);
          local_b8 = 2;
          *(char **)(lVar2 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
          local_b0 = FUN_144be33f0;
          local_a8 = "failedField";
          local_a0 = FUN_144bdef40;
          local_98 = local_res8;
          *(undefined8 *)(lVar2 + 0x40) = 0xc6;
          uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_RES_IF({}) returning {}. ",&local_b8,0);
          local_d8 = (undefined8 *)0x1;
          local_d0 = FUN_144f82010;
          local_c8 = local_res18;
          FUN_144bdc480(uVar3,"Failed to clone field \'{}\' in fast path.",&local_d8,0);
          FUN_144bdc690(local_90);
          iVar1 = local_res8[0];
        }
        goto LAB_144f9bd5e;
      }
    }
    else if (param_5 == 0) {
      local_d0 = (code *)CONCAT44(local_d0._4_4_,param_4);
      FUN_144f9cab0(param_1,local_res18,param_3,&local_d8);
      iVar1 = -0x7ffbfe00;
      local_res8[0] = -0x7ffbfe00;
      if (1 < local_res18[0]) {
        if (DAT_14c799ff8 != '\0') {
          lVar2 = FUN_144bdc640(local_90,&DAT_14c799fa8,1);
          local_b8 = 2;
          *(char **)(lVar2 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
          local_b0 = FUN_144be33f0;
          local_a8 = "failedField";
          local_a0 = FUN_144bdef40;
          local_98 = local_res8;
          *(undefined8 *)(lVar2 + 0x40) = 0xf6;
          uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_RES_IF({}) returning {}. ",&local_b8,0);
          local_d8 = (undefined8 *)0x1;
          local_d0 = FUN_144f82010;
          local_c8 = local_res18;
          FUN_144bdc480(uVar3,"Failed to clone field \'{}\' with NULL source type.",&local_d8,0);
          FUN_144bdc690(local_90);
          *param_2 = local_res8[0];
          return param_2;
        }
        goto LAB_144f9bd5e;
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_144bef800(param_5,local_res8);
      local_c8 = (ulonglong *)0;
      if (((byte)*puVar4 & 0x1f) == 7) {
        local_c8 = (ulonglong *)param_5;
      }
      if ((ulonglong *)param_5 != local_c8) {
        FUN_144f9b810(param_1,param_2,param_3,param_4,0,0);
        return param_2;
      }
      local_c0 = param_6;
      local_d0 = (code *)CONCAT44(local_d0._4_4_,param_4);
      FUN_144f9c4f0(param_1,local_res18,param_3,&local_d8);
      iVar1 = -0x7ffbfe00;
      local_res8[0] = -0x7ffbfe00;
      if (1 < local_res18[0]) {
        if (DAT_14c799ff8 != '\0') {
          lVar2 = FUN_144bdc640(local_90,&DAT_14c799fa8,1);
          local_b8 = 2;
          *(char **)(lVar2 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
          local_b0 = FUN_144be33f0;
          local_a8 = "failedField";
          local_a0 = FUN_144bdef40;
          local_98 = local_res8;
          *(undefined8 *)(lVar2 + 0x40) = 0xef;
          uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_RES_IF({}) returning {}. ",&local_b8,0);
          local_d8 = (undefined8 *)0x1;
          local_d0 = FUN_144f82010;
          local_c8 = local_res18;
          FUN_144bdc480(uVar3,"Failed to clone field \'{}\' by name matching.",&local_d8,0);
          FUN_144bdc690(local_90);
          *param_2 = local_res8[0];
          return param_2;
        }
LAB_144f9bd5e:
        *param_2 = iVar1;
        return param_2;
      }
    }
  }
  else {
    if (param_5 == param_3) {
      lVar2 = FUN_144f9a6e0();
    }
    else {
      lVar2 = FUN_144f9a8f0(*param_1,param_5);
    }
    if (lVar2 == 0) {
      *param_2 = -0x7ffbfe00;
      return param_2;
    }
    plVar6 = (longlong *)param_1[1];
    iVar1 = (int)plVar6[1];
    local_res8[0] = iVar1 + 1;
    if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < local_res8[0]) {
      FUN_144f9d210(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
    }
    puVar5 = (undefined8 *)((longlong)(int)plVar6[1] * 0x38 + *plVar6);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 10) = 0;
      puVar5[2] = 0;
      *puVar5 = hkTypeVm::NopInstruction::vftable;
    }
    *(int *)(plVar6 + 1) = local_res8[0];
    plVar6 = (longlong *)((longlong)iVar1 * 0x38 + *plVar6);
    (**(code **)(*plVar6 + 8))(plVar6,0);
    if (plVar6 != (longlong *)0x0) {
      *(undefined2 *)((longlong)plVar6 + 10) = (undefined2)param_6;
      *plVar6 = (longlong)hkTypeVm::RecordInstruction::vftable;
      *(undefined1 *)(plVar6 + 1) = 0xc;
      *(short *)((longlong)plVar6 + 0xc) = (short)param_4;
      plVar6[2] = 0;
      plVar6[3] = param_5;
      plVar6[4] = param_3;
      plVar6[5] = lVar2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f9bf90 FUN_144f9bf90 body=480 status=ok
// SIG undefined FUN_144f9bf90(void)

undefined4 *
FUN_144f9bf90(longlong *param_1,undefined4 *param_2,longlong param_3,undefined2 param_4,
             longlong param_5,undefined2 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38 [2];
  
  lVar2 = param_5;
  lVar5 = 0;
  lVar9 = 0;
  lVar6 = lVar5;
  if (param_5 != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(param_5,&param_5);
    lVar8 = lVar5;
    if (((byte)*puVar3 & 0x1f) == 8) {
      lVar8 = lVar2;
    }
    lVar6 = lVar9;
    if (((lVar8 != 0) && (FUN_144beff00(param_3,&param_5), param_5 != 0)) &&
       (FUN_144beff00(lVar8,&param_5), param_5 != 0)) {
      if (*(char *)(*param_1 + 5) == '\0') {
        plVar4 = (longlong *)FUN_144befe50(param_3,1);
        if (plVar4 != (longlong *)0x0) {
          lVar5 = *plVar4;
        }
        if ((int)((ulonglong)lVar5 >> 8) == 0) goto LAB_144f9c0aa;
      }
      FUN_144beff00(param_3,local_38);
      FUN_144beff00(lVar8,&param_5);
      if (param_5 == local_38[0]) {
        lVar6 = FUN_144f9a6e0();
      }
      else {
        lVar6 = FUN_144f9a8f0(*param_1);
      }
      if (lVar6 == 0) {
        *param_2 = 0x80040200;
        return param_2;
      }
    }
  }
LAB_144f9c0aa:
  plVar4 = (longlong *)param_1[1];
  iVar1 = (int)plVar4[1];
  if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) < iVar1 + 1) {
    FUN_144f9d210(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar1 + 1);
  }
  puVar7 = (undefined8 *)((longlong)(int)plVar4[1] * 0x38 + *plVar4);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar7 + 1) = 0;
    *(undefined4 *)((longlong)puVar7 + 10) = 0;
    puVar7[2] = 0;
    *puVar7 = hkTypeVm::NopInstruction::vftable;
  }
  *(int *)(plVar4 + 1) = iVar1 + 1;
  plVar4 = (longlong *)((longlong)iVar1 * 0x38 + *plVar4);
  (**(code **)(*plVar4 + 8))(plVar4,0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined2 *)((longlong)plVar4 + 10) = param_6;
    *plVar4 = (longlong)hkTypeVm::ArrayInstruction::vftable;
    *(undefined1 *)(plVar4 + 1) = 0xb;
    *(undefined2 *)((longlong)plVar4 + 0xc) = param_4;
    plVar4[2] = 0;
    plVar4[3] = lVar2;
    plVar4[4] = param_3;
    plVar4[5] = lVar6;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f9c170 FUN_144f9c170 body=436 status=ok
// SIG undefined FUN_144f9c170(void)

undefined8 *
FUN_144f9c170(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint local_res8 [2];
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  if (*(char *)(*param_1 + 4) == '\0') {
    uVar8 = *(undefined8 *)(param_3 + 8);
  }
  else {
    uVar8 = 0;
  }
  FUN_144bf0830(&local_30,param_3,uVar8);
  lVar2 = *param_1;
  cVar4 = *(char *)(lVar2 + 1);
  if ((cVar4 == '\0') && (*(char *)(lVar2 + 2) == '\0')) {
    do {
      do {
        puVar3 = local_30 + 1;
        if ((local_28 <= local_30 + 1) &&
           (cVar4 = FUN_144bf0850(&local_30), puVar3 = local_30, cVar4 == '\0')) {
LAB_144f9c304:
          *param_2 = 0;
          return param_2;
        }
        local_30 = puVar3;
        pbVar7 = (byte *)FUN_144bf04d0(local_30,local_48);
      } while ((*pbVar7 & 0x30) == 0);
      local_40 = *local_30;
      iVar6 = FUN_144bf0700(&local_40);
      FUN_144f9b810(*param_4,local_res8,local_40,*(int *)(param_4 + 1) + iVar6,local_40,
                    *(int *)((longlong)param_4 + 0xc) + iVar6);
    } while (-1 < (int)local_res8[0]);
    *param_2 = *local_30;
  }
  else {
    cVar1 = *(char *)(lVar2 + 2);
    do {
      do {
        puVar3 = local_30 + 1;
        if ((local_28 <= local_30 + 1) &&
           (cVar5 = FUN_144bf0850(&local_30), puVar3 = local_30, cVar5 == '\0')) goto LAB_144f9c304;
        local_30 = puVar3;
        pbVar7 = (byte *)FUN_144bf04d0(local_30,&local_40);
      } while (((*pbVar7 & 0x30) == 0) ||
              (FUN_144bf04d0(local_30,local_res8),
              (local_res8[0] & ((uint)(cVar4 != '\0') | -(uint)(cVar1 != '\0') & 0x10)) != 0));
      local_38 = *local_30;
      iVar6 = FUN_144bf0700(&local_38);
      FUN_144f9b810(*param_4,local_48,local_38,*(int *)(param_4 + 1) + iVar6,local_38,
                    *(int *)((longlong)param_4 + 0xc) + iVar6);
    } while (-1 < local_48[0]);
    *param_2 = *local_30;
  }
  return param_2;
}



// FUNCTION 144f9c330 FUN_144f9c330 body=436 status=ok
// SIG undefined FUN_144f9c330(void)

undefined8 *
FUN_144f9c330(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint local_res8 [2];
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  if (*(char *)(*param_1 + 4) == '\0') {
    uVar8 = *(undefined8 *)(param_3 + 8);
  }
  else {
    uVar8 = 0;
  }
  FUN_144bf0830(&local_30,param_3,uVar8);
  lVar2 = *param_1;
  cVar4 = *(char *)(lVar2 + 1);
  if ((cVar4 == '\0') && (*(char *)(lVar2 + 2) == '\0')) {
    do {
      do {
        puVar3 = local_30 + 1;
        if ((local_28 <= local_30 + 1) &&
           (cVar4 = FUN_144bf0850(&local_30), puVar3 = local_30, cVar4 == '\0')) {
LAB_144f9c4c4:
          *param_2 = 0;
          return param_2;
        }
        local_30 = puVar3;
        pbVar7 = (byte *)FUN_144bf04d0(local_30,local_48);
      } while ((*pbVar7 & 0x30) == 0);
      local_40 = *local_30;
      iVar6 = FUN_144bf0700(&local_40);
      FUN_144f9b810(*param_4,local_res8,local_40,*(int *)(param_4 + 1) + iVar6,local_40,
                    *(int *)((longlong)param_4 + 0xc) + iVar6);
    } while (-1 < (int)local_res8[0]);
    *param_2 = *local_30;
  }
  else {
    cVar1 = *(char *)(lVar2 + 2);
    do {
      do {
        puVar3 = local_30 + 1;
        if ((local_28 <= local_30 + 1) &&
           (cVar5 = FUN_144bf0850(&local_30), puVar3 = local_30, cVar5 == '\0')) goto LAB_144f9c4c4;
        local_30 = puVar3;
        pbVar7 = (byte *)FUN_144bf04d0(local_30,&local_40);
      } while (((*pbVar7 & 0x30) == 0) ||
              (FUN_144bf04d0(local_30,local_res8),
              (local_res8[0] & ((uint)(cVar4 != '\0') | -(uint)(cVar1 != '\0') & 0x10)) != 0));
      local_38 = *local_30;
      iVar6 = FUN_144bf0700(&local_38);
      FUN_144f9b810(*param_4,local_48,local_38,*(int *)(param_4 + 1) + iVar6,local_38,
                    *(int *)((longlong)param_4 + 0xc) + iVar6);
    } while (-1 < local_48[0]);
    *param_2 = *local_30;
  }
  return param_2;
}



// FUNCTION 144f9c4f0 FUN_144f9c4f0 body=1469 status=ok
// SIG undefined FUN_144f9c4f0(void)

ulonglong * FUN_144f9c4f0(longlong *param_1,ulonglong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  int *piVar13;
  longlong lVar14;
  int local_res8 [2];
  ulonglong local_118;
  int local_110 [2];
  ulonglong local_108;
  uint local_100;
  uint local_fc;
  ulonglong local_f8;
  undefined1 local_f0 [8];
  ulonglong *local_e8;
  ulonglong *local_e0;
  undefined8 local_c8;
  code *local_c0;
  ulonglong *local_b8;
  undefined8 local_b0;
  code *local_a8;
  char *local_a0;
  code *local_98;
  int *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [80];
  
  if (*(char *)(*param_1 + 4) == '\0') {
    uVar11 = *(undefined8 *)(param_3 + 8);
  }
  else {
    uVar11 = 0;
  }
  FUN_144bf0830(&local_e8,param_3,uVar11);
  lVar14 = *param_1;
  cVar5 = *(char *)(lVar14 + 1);
  if ((cVar5 == '\0') && (*(char *)(lVar14 + 2) == '\0')) {
LAB_144f9c590:
    do {
      do {
        puVar12 = local_e8 + 1;
        if ((local_e0 <= local_e8 + 1) &&
           (cVar5 = FUN_144bf0850(&local_e8), puVar12 = local_e8, cVar5 == '\0')) {
LAB_144f9ca74:
          *param_2 = 0;
          return param_2;
        }
        local_e8 = puVar12;
        pbVar10 = (byte *)FUN_144bf04d0(local_e8,&local_fc);
      } while ((*pbVar10 & 0x30) == 0);
      local_118 = 0;
      local_108 = *local_e8;
      uVar1 = *(undefined1 *)(*(longlong *)*param_4 + 4);
      if (*(char *)(*(longlong *)*param_4 + 3) == '\0') {
        uVar11 = FUN_144bf0530(&local_108);
        puVar12 = (ulonglong *)FUN_144befc20(param_4[2],local_88,uVar11,uVar1);
      }
      else {
        uVar11 = FUN_144bf0530(&local_108);
        puVar12 = (ulonglong *)FUN_144befa90(param_4[2],&local_f8,uVar11,uVar1);
      }
      uVar3 = local_108;
      local_118 = *puVar12;
      if (local_118 < 2) {
        iVar9 = FUN_144bf0700();
        piVar13 = (int *)FUN_144f9b810(*param_4,local_f0,uVar3,iVar9 + *(int *)(param_4 + 1),0,0);
        local_110[0] = *piVar13;
        if (-1 < local_110[0]) goto LAB_144f9c7cf;
        iVar9 = local_110[0];
        if (DAT_14c799ff8 != '\0') {
          lVar14 = FUN_144bdc640(local_78,&DAT_14c799fa8,1);
          local_b0 = 2;
          local_a8 = FUN_144f9d390;
          local_a0 = "dispatch(fieldDecl.getType(), dstOff + fieldDecl.getOffset(), nullptr, 0)";
          *(char **)(lVar14 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
          local_90 = local_110;
          *(undefined8 *)(lVar14 + 0x40) = 0xeb;
          local_98 = FUN_144bdef40;
          uVar11 = FUN_144bdc480(lVar14,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_b0,0);
          local_b8 = &local_108;
          local_c8 = 1;
          local_c0 = FUN_144f82010;
          FUN_144bdc480(uVar11,"Failed to compile \'{}\'",&local_c8,0);
          FUN_144bdc690(local_78);
          iVar9 = local_110[0];
        }
      }
      else {
        FUN_144bf04d0(&local_118,&local_100);
        uVar4 = local_108;
        uVar3 = local_118;
        if (((*(char *)(*(longlong *)*param_4 + 1) != '\0') && ((~(byte)local_100 & 1) == 0)) ||
           ((*(char *)(*(longlong *)*param_4 + 2) != '\0' && ((local_100 >> 4 & 1) != 0)))) {
LAB_144f9c7cf:
          local_res8[0] = 0;
          goto LAB_144f9c590;
        }
        iVar7 = FUN_144bf0700(&local_118);
        iVar9 = *(int *)(param_4 + 3);
        iVar8 = FUN_144bf0700(&local_108);
        FUN_144f9b810(*param_4,local_res8,uVar4,iVar8 + *(int *)(param_4 + 1),uVar3,iVar7 + iVar9);
        iVar9 = local_res8[0];
      }
      local_res8[0] = iVar9;
    } while (-1 < local_res8[0]);
    *param_2 = *local_e8;
  }
  else {
    cVar2 = *(char *)(lVar14 + 2);
LAB_144f9c810:
    do {
      do {
        puVar12 = local_e8 + 1;
        if ((local_e0 <= local_e8 + 1) &&
           (cVar6 = FUN_144bf0850(&local_e8), puVar12 = local_e8, cVar6 == '\0'))
        goto LAB_144f9ca74;
        local_e8 = puVar12;
        pbVar10 = (byte *)FUN_144bf04d0(local_e8,local_f0);
      } while (((*pbVar10 & 0x30) == 0) ||
              (FUN_144bf04d0(local_e8,&local_100),
              (local_100 & (-(uint)(cVar2 != '\0') & 0x10 | (uint)(cVar5 != '\0'))) != 0));
      local_f8 = 0;
      local_118 = *local_e8;
      uVar1 = *(undefined1 *)(*(longlong *)*param_4 + 4);
      if (*(char *)(*(longlong *)*param_4 + 3) == '\0') {
        uVar11 = FUN_144bf0530(&local_118);
        puVar12 = (ulonglong *)FUN_144befc20(param_4[2],local_80,uVar11,uVar1);
      }
      else {
        uVar11 = FUN_144bf0530(&local_118);
        puVar12 = (ulonglong *)FUN_144befa90(param_4[2],local_88,uVar11,uVar1);
      }
      uVar3 = local_118;
      local_f8 = *puVar12;
      if (local_f8 < 2) {
        iVar9 = FUN_144bf0700();
        piVar13 = (int *)FUN_144f9b810(*param_4,&local_108,uVar3,iVar9 + *(int *)(param_4 + 1),0,0);
        local_110[0] = *piVar13;
        if (-1 < local_110[0]) goto LAB_144f9ca68;
        iVar9 = local_110[0];
        if (DAT_14c799ff8 != '\0') {
          lVar14 = FUN_144bdc640(local_78,&DAT_14c799fa8,1);
          local_b0 = 2;
          local_a8 = FUN_144f9d390;
          local_a0 = "dispatch(fieldDecl.getType(), dstOff + fieldDecl.getOffset(), nullptr, 0)";
          *(char **)(lVar14 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
          local_90 = local_110;
          *(undefined8 *)(lVar14 + 0x40) = 0xeb;
          local_98 = FUN_144bdef40;
          uVar11 = FUN_144bdc480(lVar14,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_b0,0);
          local_c8 = 1;
          local_c0 = FUN_144f82010;
          local_b8 = &local_118;
          FUN_144bdc480(uVar11,"Failed to compile \'{}\'",&local_c8,0);
          FUN_144bdc690(local_78);
          iVar9 = local_110[0];
        }
      }
      else {
        FUN_144bf04d0(&local_f8,&local_fc);
        uVar4 = local_f8;
        uVar3 = local_118;
        if (((*(char *)(*(longlong *)*param_4 + 1) != '\0') && ((~(byte)local_fc & 1) == 0)) ||
           ((*(char *)(*(longlong *)*param_4 + 2) != '\0' && ((local_fc >> 4 & 1) != 0)))) {
LAB_144f9ca68:
          local_res8[0] = 0;
          goto LAB_144f9c810;
        }
        iVar7 = FUN_144bf0700(&local_f8);
        iVar9 = *(int *)(param_4 + 3);
        iVar8 = FUN_144bf0700(&local_118);
        FUN_144f9b810(*param_4,local_res8,uVar3,iVar8 + *(int *)(param_4 + 1),uVar4,iVar7 + iVar9);
        iVar9 = local_res8[0];
      }
      local_res8[0] = iVar9;
    } while (-1 < local_res8[0]);
    *param_2 = *local_e8;
  }
  return param_2;
}



// FUNCTION 144f9cab0 FUN_144f9cab0 body=447 status=ok
// SIG undefined FUN_144f9cab0(void)

undefined8 *
FUN_144f9cab0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint local_res8 [2];
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  uVar8 = 0;
  if (*(char *)(*param_1 + 4) == '\0') {
    uVar8 = *(undefined8 *)(param_3 + 8);
  }
  FUN_144bf0830(&local_40,param_3,uVar8);
  lVar2 = *param_1;
  cVar4 = *(char *)(lVar2 + 1);
  if ((cVar4 == '\0') && (*(char *)(lVar2 + 2) == '\0')) {
    do {
      do {
        puVar3 = local_40 + 1;
        if ((local_38 <= local_40 + 1) &&
           (cVar4 = FUN_144bf0850(&local_40), puVar3 = local_40, cVar4 == '\0')) {
LAB_144f9cc4b:
          *param_2 = 0;
          return param_2;
        }
        local_40 = puVar3;
        pbVar7 = (byte *)FUN_144bf04d0(local_40,local_58);
      } while ((*pbVar7 & 0x30) == 0);
      uVar8 = *local_40;
      local_50 = uVar8;
      iVar6 = FUN_144bf0700(&local_50);
      FUN_144f9b810(*param_4,local_res8,uVar8,iVar6 + *(int *)(param_4 + 1),0,0);
    } while (-1 < (int)local_res8[0]);
    *param_2 = *local_40;
  }
  else {
    cVar1 = *(char *)(lVar2 + 2);
    do {
      do {
        puVar3 = local_40 + 1;
        if ((local_38 <= local_40 + 1) &&
           (cVar5 = FUN_144bf0850(&local_40), puVar3 = local_40, cVar5 == '\0')) goto LAB_144f9cc4b;
        local_40 = puVar3;
        pbVar7 = (byte *)FUN_144bf04d0(local_40,&local_50);
      } while (((*pbVar7 & 0x30) == 0) ||
              (FUN_144bf04d0(local_40,local_res8),
              (local_res8[0] & (-(uint)(cVar1 != '\0') & 0x10 | (uint)(cVar4 != '\0'))) != 0));
      uVar8 = *local_40;
      local_48 = uVar8;
      iVar6 = FUN_144bf0700(&local_48);
      FUN_144f9b810(*param_4,local_58,uVar8,iVar6 + *(int *)(param_4 + 1),0,0);
    } while (-1 < local_58[0]);
    *param_2 = *local_40;
  }
  return param_2;
}



// FUNCTION 144f9cc70 FUN_144f9cc70 body=392 status=ok
// SIG undefined FUN_144f9cc70(void)

uint * FUN_144f9cc70(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_3[1];
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = iVar9 * -0x61c8864f;
  uVar11 = (int)lVar1 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  iVar9 = (int)((ulonglong)lVar2 >> 0x20);
  uVar12 = iVar9 * -0x61c8864f;
  uVar10 = uVar10 * 0x40 + uVar11 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar10;
  uVar11 = (int)lVar2 * -0x61c8864f;
  uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
           (int)lVar2 * -0x4f000000;
  uVar12 = uVar11 + uVar12 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar12;
  uVar10 = (uVar12 >> 2) + 0x9e3779b9 + uVar12 + uVar10 * 0x40 ^ uVar10;
  lVar3 = param_1[2];
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  iVar9 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar9 < 0) {
      uVar11 = *(uint *)(param_1 + 1);
      *puVar7 = uVar10;
      puVar7[1] = uVar11;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f9cdcd:
      param_2[1] = (uint)((longlong)puVar7 - lVar3 >> 3);
      return param_2;
    }
    if (*puVar7 == uVar10) {
      uVar11 = puVar7[1];
      if ((*(longlong *)(*param_1 + (longlong)(int)uVar11 * 0x18) == lVar1) &&
         (*(longlong *)(*param_1 + 8 + (longlong)(int)uVar11 * 0x18) == lVar2)) {
        *param_2 = uVar11;
        goto LAB_144f9cdcd;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar9 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f9ce00 FUN_144f9ce00 body=302 status=ok
// SIG undefined FUN_144f9ce00(void)

uint * FUN_144f9ce00(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f9cf06:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f9cf06;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f9cf30 FUN_144f9cf30 body=152 status=ok
// SIG undefined FUN_144f9cf30(void)

uint * FUN_144f9cf30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 0x10) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144f9cfd0 FUN_144f9cfd0 body=243 status=ok
// SIG undefined FUN_144f9cfd0(void)

uint * FUN_144f9cfd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = iVar4 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar7 = (int)lVar2 * -0x61c8864f;
  uVar9 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar8 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
          (int)lVar1 * -0x4f000000;
  uVar9 = uVar8 + uVar9 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar9;
  iVar4 = (int)((ulonglong)lVar2 >> 0x20);
  uVar8 = iVar4 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar2 * -0x4f000000
  ;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar8 = uVar7 + uVar8 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar8;
  lVar3 = param_1[2];
  uVar9 = uVar9 ^ uVar9 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 + uVar8;
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  uVar7 = *(uint *)(lVar3 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar7 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar3 + uVar5 * 8);
    if (((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (ulonglong)uVar7 * 0x18) == lVar1)) &&
       (*(longlong *)(*param_1 + 8 + (ulonglong)uVar7 * 0x18) == lVar2)) break;
    uVar5 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar7 = *(uint *)(lVar3 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144f9d0d0 FUN_144f9d0d0 body=311 status=ok
// SIG undefined FUN_144f9d0d0(void)

ulonglong FUN_144f9d0d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  
  uVar13 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar13 * 2;
  uVar10 = param_3;
  if (param_3 < uVar12) {
    uVar10 = uVar12;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x38,&local_res8);
  uVar12 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined8 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar5;
        uVar5 = puVar8[3];
        puVar7[2] = puVar8[2];
        puVar7[3] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x24);
        uVar3 = *(undefined4 *)(puVar8 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x2c);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar8 + 4);
        *(undefined4 *)((longlong)puVar7 + 0x24) = uVar2;
        *(undefined4 *)(puVar7 + 5) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
        puVar7[6] = puVar8[6];
      }
      puVar7 = puVar7 + 7;
      puVar8 = puVar8 + 7;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar10 * 0x38 + 0x38;
  uVar11 = uVar10;
  if (uVar12 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar11 = uVar10 + 1;
    if (uVar12 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x38;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      lVar9 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      uVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
      uVar11 = uVar11 + ((uVar10 - lVar9 >> 1) + lVar9 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar12 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar13 * 0x38);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar12;
}



// FUNCTION 144f9d210 FUN_144f9d210 body=374 status=ok
// SIG undefined FUN_144f9d210(void)

ulonglong FUN_144f9d210(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  longlong *local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  local_res20 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = param_3;
  if (param_3 < local_res20 * 2) {
    uVar5 = local_res20 * 2;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res18 = uVar5 * 0x38;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,local_res18,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  plVar7 = (longlong *)*param_1;
  uVar9 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    plVar4 = plVar7;
    lVar6 = lVar3;
    do {
      if ((lVar6 != 0) && (FUN_144bfbed0(lVar6,plVar4,0x38), plVar4 != (longlong *)0x0)) {
        *(undefined1 *)(plVar4 + 1) = 0;
        *(undefined4 *)((longlong)plVar4 + 10) = 0;
        plVar4[2] = 0;
        *plVar4 = (longlong)hkTypeVm::NopInstruction::vftable;
      }
      lVar6 = lVar6 + 0x38;
      plVar4 = plVar4 + 7;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    do {
      (**(code **)(*plVar7 + 8))(plVar7,0);
      plVar7 = plVar7 + 7;
      uVar9 = uVar9 - 1;
      param_2 = local_res10;
    } while (uVar9 != 0);
  }
  uVar9 = local_res18 + 0x38;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar5 = uVar5 + 1;
    if (uVar9 <= local_res8) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res8 - local_res18;
      lVar6 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar9 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar5 = uVar5 + (((local_res8 - local_res18) - lVar6 >> 1) + lVar6 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar9 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,local_res20 * 0x38);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar9;
}



// FUNCTION 144f9d390 FUN_144f9d390 body=32 status=ok
// SIG undefined FUN_144f9d390(void)

undefined8 FUN_144f9d390(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f9d3b0 FUN_144f9d3b0 body=325 status=ok
// SIG undefined FUN_144f9d3b0(void)

void FUN_144f9d3b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar7 = param_3;
  if (param_3 < uVar3) {
    uVar7 = uVar3;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      plVar4 = (longlong *)*plVar5;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar3 = uVar7 * 8 + 8;
  uVar6 = uVar7;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar6 = uVar7 + 1;
    if (uVar3 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar7 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 144f9d500 FUN_144f9d500 body=36 status=ok
// SIG undefined FUN_144f9d500(void)

undefined8 FUN_144f9d500(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_144f50bb0(param_1,local_res8);
  return param_1;
}



// FUNCTION 144f9d530 FUN_144f9d530 body=36 status=ok
// SIG undefined FUN_144f9d530(void)

undefined8 FUN_144f9d530(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_144f50bb0(param_1,local_res8);
  return param_1;
}



// FUNCTION 144f9d560 FUN_144f9d560 body=266 status=ok
// SIG undefined FUN_144f9d560(void)

void FUN_144f9d560(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f9d670 FUN_144f9d670 body=291 status=ok
// SIG undefined FUN_144f9d670(void)

ulonglong FUN_144f9d670(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x18);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144f9d7a0 FUN_144f9d7a0 body=243 status=ok
// SIG undefined FUN_144f9d7a0(void)

void FUN_144f9d7a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f9d8a0 FUN_144f9d8a0 body=71 status=ok
// SIG undefined FUN_144f9d8a0(void)

undefined8 * FUN_144f9d8a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f9d8f0 FUN_144f9d8f0 body=210 status=ok
// SIG undefined FUN_144f9d8f0(void)

void FUN_144f9d8f0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x38);
    uVar1 = *(uint *)(param_1 + 1);
    lVar6 = *param_1;
    uVar4 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      uVar7 = (ulonglong)uVar1;
      lVar3 = lVar2;
      lVar5 = lVar6;
      do {
        if (lVar3 != 0) {
          FUN_144f99900(lVar3,lVar5);
        }
        lVar3 = lVar3 + 0x38;
        lVar5 = lVar5 + 0x38;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      do {
        FUN_144f99950(lVar6);
        lVar6 = lVar6 + 0x38;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *param_1 = lVar2;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144f9d9d0 FUN_144f9d9d0 body=262 status=ok
// SIG undefined FUN_144f9d9d0(void)

void FUN_144f9d9d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 8;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"InlineFixedArrayPass");
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = hkTypeVm::InlineFixedArrayPass::vftable;
  }
  FUN_144f9a380(param_1,puVar1);
  local_res10[0] = 0x10;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"InlineRecordPass");
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = hkTypeVm::InlineRecordPass::vftable;
  }
  FUN_144f9a380(param_1,puVar1);
  local_res10[0] = 8;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"BlockPass");
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = hkTypeVm::BlockPass::vftable;
  }
  FUN_144f9a380(param_1,puVar1);
  return;
}



// FUNCTION 144f9dae0 FUN_144f9dae0 body=876 status=ok
// SIG undefined FUN_144f9dae0(void)

undefined4 * FUN_144f9dae0(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong local_res18 [2];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [16];
  
  plVar13 = (longlong *)*param_3;
  plVar19 = plVar13 + (longlong)(int)param_3[1] * 7;
  do {
    if (plVar13 == plVar19) {
      lVar18 = *param_3;
      iVar5 = (int)param_3[1];
      lVar16 = (longlong)iVar5;
      lVar11 = lVar18;
      if (lVar18 != lVar16 * 0x38 + lVar18) {
        do {
          lVar17 = 0;
          if (*(char *)(lVar11 + 8) == '\r') {
            lVar17 = lVar11;
          }
          local_res18[0] = lVar11;
          if (lVar17 != 0) {
            uVar1 = lVar11 + 0x38;
            uVar12 = (longlong)(int)lVar16 * 0x38 + lVar18;
            while (((uVar1 != uVar12 && (*(char *)(lVar11 + 0x40) == '\r')) &&
                   ((iVar6 = *(int *)(lVar17 + 0x18),
                    (uint)*(ushort *)(lVar17 + 10) + iVar6 == (uint)*(ushort *)(lVar11 + 0x42) &&
                    ((uint)*(ushort *)(lVar17 + 0xc) + iVar6 == (uint)*(ushort *)(lVar11 + 0x44)))))
                  ) {
              uVar12 = lVar11 + 0x70;
              *(int *)(lVar17 + 0x18) = *(int *)(lVar11 + 0x50) + iVar6;
              iVar5 = (int)param_3[1] + -1;
              uVar15 = (longlong)(((longlong)(int)param_3[1] * 0x38 - uVar12) + *param_3) / 0x38;
              uVar14 = uVar12;
              while (uVar14 != uVar1) {
                uVar14 = uVar14 - 0x38;
                FUN_144f99950(uVar14);
              }
              if (0 < (int)uVar15) {
                if (uVar1 < uVar12) {
                  uVar15 = uVar15 & 0xffffffff;
                  lVar18 = uVar1 - uVar12;
                  do {
                    lVar16 = lVar18 + uVar12;
                    if (lVar16 != 0) {
                      FUN_144f99900(lVar16,uVar12);
                    }
                    FUN_144f99950(uVar12);
                    uVar12 = uVar12 + 0x38;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                else if (uVar1 != uVar12) {
                  uVar14 = uVar15 & 0xffffffff;
                  lVar16 = (longlong)((int)uVar15 + -1) * 0x38;
                  lVar18 = lVar16 + uVar12;
                  lVar16 = lVar16 + uVar1;
                  do {
                    if (lVar16 != 0) {
                      FUN_144f99900(lVar16,lVar18);
                    }
                    FUN_144f99950(lVar18);
                    lVar18 = lVar18 + -0x38;
                    lVar16 = lVar16 + -0x38;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
              }
              *(int *)(param_3 + 1) = iVar5;
              lVar18 = *param_3;
              uVar12 = (longlong)iVar5 * 0x38 + lVar18;
            }
          }
          lVar16 = (longlong)iVar5;
          lVar11 = local_res18[0] + 0x38;
        } while (local_res18[0] + 0x38 != lVar16 * 0x38 + lVar18);
        *param_2 = 0;
        return param_2;
      }
      *param_2 = 0;
      return param_2;
    }
    cVar2 = (char)plVar13[1];
    if (((cVar2 == '\x01') || (cVar2 == '\x02')) || (cVar2 == '\x03')) {
      lVar18 = plVar13[4];
      lVar11 = plVar13[3];
      puVar7 = (uint *)FUN_144b45d50(lVar18,local_res18);
      if ((((*puVar7 >> 3 & 1) == 0) && (lVar11 != 0)) &&
         ((puVar7 = (uint *)FUN_144b45d50(lVar11,local_58), (*puVar7 >> 3 & 1) == 0 &&
          (plVar13[2] == 0)))) {
        iVar5 = FUN_144beec90(lVar11);
        iVar6 = FUN_144beec90(lVar18);
        if (iVar6 == iVar5) {
          piVar8 = (int *)FUN_144bef800(lVar11,local_54);
          piVar9 = (int *)FUN_144bef800(lVar18,local_50);
          if (*piVar9 == *piVar8) {
LAB_144f9dbfc:
            uVar3 = *(undefined2 *)((longlong)plVar13 + 10);
            uVar4 = *(undefined2 *)((longlong)plVar13 + 0xc);
            (**(code **)(*plVar13 + 8))(plVar13,0);
            FUN_144f99c40(plVar13,uVar4,uVar3,iVar6);
          }
          else {
            puVar10 = (undefined4 *)FUN_144bef800(lVar11,local_4c);
            lVar16 = 0;
            if (((byte)*puVar10 & 0x1f) == 4) {
              lVar16 = lVar11;
            }
            if (lVar16 != 0) {
              puVar10 = (undefined4 *)FUN_144bef800(lVar18,local_48);
              lVar11 = 0;
              if (((byte)*puVar10 & 0x1f) == 2) {
                lVar11 = lVar18;
              }
              if (lVar11 != 0) goto LAB_144f9dbfc;
            }
          }
        }
      }
    }
    plVar13 = plVar13 + 7;
  } while( true );
}



// FUNCTION 144f9de50 FUN_144f9de50 body=71 status=ok
// SIG undefined FUN_144f9de50(void)

undefined8 * FUN_144f9de50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f9dea0 FUN_144f9dea0 body=1111 status=ok
// SIG undefined FUN_144f9dea0(void)

undefined4 * FUN_144f9dea0(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar16;
  undefined8 uVar14;
  longlong lVar15;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  int local_res18;
  int local_c0;
  int local_bc;
  uint local_b8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  
  local_80 = 0;
  puVar1 = (uint *)((longlong)param_3 + 0xc);
  local_a0 = 0;
  local_bc = 0;
  local_98 = 0;
  local_b8 = 0x80000000;
  local_94 = 0x80000000;
  if (param_3 != &local_a0) {
    FUN_144f9d8f0(&local_a0,&PTR_vftable_14c6e47a0);
    FUN_144f9d8f0(param_3,&PTR_vftable_14c6e47a0);
    local_80 = *param_3;
    *param_3 = local_a0;
    local_bc = (int)param_3[1];
    local_b8 = *puVar1;
    *(undefined4 *)(param_3 + 1) = local_98;
    *puVar1 = local_94;
  }
  lVar15 = local_80;
  if ((int)(*puVar1 & 0x7fffffff) < local_bc) {
    FUN_144f9f1a0(param_3,&PTR_vftable_14c6e47a0,(longlong)local_bc);
  }
  local_48 = (longlong)local_bc * 0x38 + lVar15;
  lVar11 = lVar15;
  if (lVar15 != local_48) {
    do {
      lVar11 = 0;
      if (*(char *)(lVar15 + 8) == '\v') {
        lVar11 = lVar15;
      }
      local_50 = lVar11;
      if (lVar11 == 0) {
LAB_144f9e2b8:
        iVar5 = (int)param_3[1] + 1;
        if ((int)(*puVar1 & 0x7fffffff) < iVar5) {
          FUN_144f9d210(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        lVar11 = (longlong)(int)param_3[1] * 0x38 + *param_3;
        if (lVar11 != 0) {
          FUN_144f99900(lVar11,lVar15);
        }
        *(int *)(param_3 + 1) = iVar5;
      }
      else {
        lVar10 = *(longlong *)(lVar11 + 0x18);
        puVar7 = (undefined4 *)FUN_144bef800(lVar10,local_78);
        lVar12 = 0;
        if (((byte)*puVar7 & 0x1f) == 8) {
          lVar12 = lVar10;
        }
        uVar19 = *(undefined8 *)(lVar11 + 0x20);
        puVar7 = (undefined4 *)FUN_144bef800(uVar19,local_74);
        uVar14 = 0;
        if (((byte)*puVar7 & 0x1f) == 8) {
          uVar14 = uVar19;
        }
        puVar7 = (undefined4 *)FUN_144bef800(uVar14,local_70);
        uVar19 = 0;
        if (((byte)*puVar7 & 0x1f) == 8) {
          uVar19 = uVar14;
        }
        if ((((*(longlong *)(lVar11 + 0x28) == 0) || (lVar12 == 0)) ||
            (*(longlong *)(lVar11 + 0x10) != 0)) ||
           ((puVar8 = (uint *)FUN_144b45d50(lVar12,local_6c), (*puVar8 >> 3 & 1) != 0 ||
            (puVar8 = (uint *)FUN_144b45d50(uVar19,local_68), (*puVar8 >> 3 & 1) != 0))))
        goto LAB_144f9e2b8;
        puVar9 = (undefined8 *)FUN_144befe50(lVar12,1);
        if (puVar9 == (undefined8 *)0x0) {
          uVar16 = 0;
        }
        else {
          uVar16 = (uint)((ulonglong)*puVar9 >> 8);
        }
        puVar9 = (undefined8 *)FUN_144befe50(uVar19,1);
        if (puVar9 == (undefined8 *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (uint)((ulonglong)*puVar9 >> 8);
        }
        if ((((int)uVar16 < 1) || ((int)uVar18 < 1)) ||
           (local_90 = *(longlong *)(lVar11 + 0x28), local_90 == 0)) goto LAB_144f9e2b8;
        if (*(int *)(local_90 + 0x10) != 0) {
          FUN_144beff00(lVar12,&local_60);
          iVar5 = FUN_144beec90(local_60);
          FUN_144beff00(uVar19);
          iVar6 = FUN_144beec90(local_58);
          if ((int)uVar16 < (int)uVar18) {
            uVar18 = uVar16;
          }
          if (0 < (int)uVar18) {
            local_88 = (ulonglong)uVar18;
            local_res18 = 0;
            local_c0 = 0;
            lVar10 = local_90;
            do {
              uVar2 = *(ushort *)(lVar11 + 10);
              uVar3 = *(ushort *)(lVar11 + 0xc);
              iVar4 = *(int *)(lVar10 + 0x10);
              for (iVar17 = 0; iVar17 != iVar4; iVar17 = iVar17 + 1) {
                lVar12 = param_3[1];
                iVar13 = (int)lVar12 + 1;
                lVar11 = *(longlong *)(lVar10 + 8);
                if ((int)(*puVar1 & 0x7fffffff) < iVar13) {
                  FUN_144f9d210(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar13);
                }
                lVar10 = (longlong)(int)param_3[1] * 0x38 + *param_3;
                if (lVar10 != 0) {
                  FUN_144f998c0(lVar10,(longlong)iVar17 * 0x38 + lVar11);
                }
                *(int *)(param_3 + 1) = iVar13;
                FUN_144f997a0((longlong)(int)lVar12 * 0x38 + *param_3,(uint)uVar3 + local_c0,
                              (uint)uVar2 + local_res18);
                lVar10 = local_90;
              }
              local_res18 = local_res18 + iVar5;
              local_c0 = local_c0 + iVar6;
              local_88 = local_88 - 1;
              lVar11 = local_50;
            } while (local_88 != 0);
            local_88 = 0;
          }
        }
      }
      lVar15 = lVar15 + 0x38;
      lVar11 = local_80;
    } while (lVar15 != local_48);
  }
  *param_2 = 0;
  lVar15 = (longlong)local_bc * 0x38 + lVar11;
  while (lVar15 != lVar11) {
    lVar15 = lVar15 + -0x38;
    FUN_144f99950(lVar15);
  }
  if ((-1 < (int)local_b8) && (lVar11 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar11,(ulonglong)(local_b8 & 0x7fffffff) * 0x38);
  }
  return param_2;
}



// FUNCTION 144f9e300 FUN_144f9e300 body=71 status=ok
// SIG undefined FUN_144f9e300(void)

undefined8 * FUN_144f9e300(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f9e350 FUN_144f9e350 body=850 status=ok
// SIG undefined FUN_144f9e350(void)

undefined4 * FUN_144f9e350(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int local_res18;
  uint local_88;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  longlong local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [8];
  longlong local_48;
  
  local_60 = 0;
  puVar1 = (uint *)((longlong)param_3 + 0xc);
  local_70 = 0;
  local_res18 = 0;
  local_68 = 0;
  local_64 = 0x80000000;
  local_88 = 0x80000000;
  if (param_3 != &local_70) {
    FUN_144f9d8f0(&local_70,&PTR_vftable_14c6e47a0);
    FUN_144f9d8f0(param_3,&PTR_vftable_14c6e47a0);
    local_60 = *param_3;
    *param_3 = local_70;
    local_res18 = (int)param_3[1];
    local_88 = *puVar1;
    *(undefined4 *)(param_3 + 1) = local_68;
    *puVar1 = local_64;
  }
  lVar14 = local_60;
  if ((int)(*puVar1 & 0x7fffffff) < local_res18) {
    FUN_144f9f1a0(param_3,&PTR_vftable_14c6e47a0,(longlong)local_res18);
  }
  local_48 = (longlong)local_res18 * 0x38 + lVar14;
  lVar10 = lVar14;
  if (lVar14 != local_48) {
    do {
      lVar10 = 0;
      if (*(char *)(lVar14 + 8) == '\f') {
        lVar10 = lVar14;
      }
      if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x10) != 0)) {
LAB_144f9e5ae:
        iVar13 = (int)param_3[1] + 1;
        if ((int)(*puVar1 & 0x7fffffff) < iVar13) {
          FUN_144f9d210(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar13);
        }
        lVar10 = (longlong)(int)param_3[1] * 0x38 + *param_3;
        if (lVar10 != 0) {
          FUN_144f99900(lVar10,lVar14);
        }
        *(int *)(param_3 + 1) = iVar13;
      }
      else {
        if (*(char *)(param_1 + 8) != '\0') {
          lVar6 = *(longlong *)(lVar10 + 0x18);
          puVar5 = (undefined4 *)FUN_144bef800(lVar6,local_58);
          lVar7 = 0;
          if (((byte)*puVar5 & 0x1f) == 7) {
            lVar7 = lVar6;
          }
          if (lVar7 == 0) goto LAB_144f9e5ae;
        }
        lVar6 = *(longlong *)(lVar10 + 0x20);
        puVar5 = (undefined4 *)FUN_144bef800(lVar6,local_54);
        lVar7 = 0;
        if (((byte)*puVar5 & 0x1f) == 7) {
          lVar7 = lVar6;
        }
        if (lVar7 != 0) {
          lVar6 = FUN_144befe30(*(undefined8 *)(lVar10 + 0x18),0x10000000);
          uVar4 = *(undefined8 *)(lVar10 + 0x20);
          puVar5 = (undefined4 *)FUN_144bef800(uVar4,local_50);
          uVar8 = 0;
          if (((byte)*puVar5 & 0x1f) == 7) {
            uVar8 = uVar4;
          }
          lVar7 = FUN_144befe30(uVar8,0x10000000);
          if ((lVar6 != 0) != (lVar7 != 0)) goto LAB_144f9e5ae;
        }
        lVar6 = *(longlong *)(lVar10 + 0x28);
        if (lVar6 == 0) goto LAB_144f9e5ae;
        iVar13 = *(int *)(lVar6 + 0x10);
        if (iVar13 != 0) {
          uVar2 = *(undefined2 *)(lVar10 + 10);
          uVar3 = *(undefined2 *)(lVar10 + 0xc);
          for (iVar12 = 0; iVar12 != iVar13; iVar12 = iVar12 + 1) {
            lVar7 = param_3[1];
            iVar11 = (int)lVar7 + 1;
            lVar10 = *(longlong *)(lVar6 + 8);
            if ((int)(*puVar1 & 0x7fffffff) < iVar11) {
              FUN_144f9d210(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar11);
            }
            lVar9 = (longlong)(int)param_3[1] * 0x38 + *param_3;
            if (lVar9 != 0) {
              FUN_144f998c0(lVar9,(longlong)iVar12 * 0x38 + lVar10);
            }
            *(int *)(param_3 + 1) = iVar11;
            FUN_144f997a0((longlong)(int)lVar7 * 0x38 + *param_3,uVar3,uVar2);
          }
        }
      }
      lVar14 = lVar14 + 0x38;
      lVar10 = local_60;
    } while (lVar14 != local_48);
  }
  *param_2 = 0;
  lVar14 = (longlong)local_res18 * 0x38 + lVar10;
  while (lVar14 != lVar10) {
    lVar14 = lVar14 + -0x38;
    FUN_144f99950(lVar14);
  }
  if ((-1 < (int)local_88) && (lVar10 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar10,(ulonglong)(local_88 & 0x7fffffff) * 0x38);
  }
  return param_2;
}



// FUNCTION 144f9e6b0 FUN_144f9e6b0 body=71 status=ok
// SIG undefined FUN_144f9e6b0(void)

undefined8 * FUN_144f9e6b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f9e700 FUN_144f9e700 body=14 status=ok
// SIG undefined FUN_144f9e700(void)

undefined8 * FUN_144f9e700(undefined8 *param_1)

{
  *param_1 = hkTypeVm::IntAndFloatConversionPass::vftable;
  return param_1;
}



// FUNCTION 144f9e710 FUN_144f9e710 body=559 status=ok
// SIG undefined FUN_144f9e710(void)

undefined4 *
FUN_144f9e710(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong param_4,
             longlong param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint local_res20 [2];
  uint local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  
  if ((((param_4 != 0) && (param_4 != param_5)) &&
      (puVar5 = (uint *)FUN_144b45d50(param_4,local_res20), (*puVar5 >> 3 & 1) == 0)) &&
     (puVar5 = (uint *)FUN_144b45d50(param_5,local_res20), (*puVar5 >> 3 & 1) == 0)) {
    plVar9 = (longlong *)*param_3;
    plVar10 = plVar9 + (longlong)(int)param_3[1] * 7;
    for (; plVar9 != plVar10; plVar9 = plVar9 + 7) {
      if (((byte)((char)plVar9[1] - 1U) < 0xc) && (plVar9 != (longlong *)0x0)) {
        FUN_144bef800(plVar9[4],&local_38);
        FUN_144bef800(plVar9[3],local_res20);
        if (local_res20[0] != local_38) {
          cVar4 = (char)plVar9[1];
          uVar8 = local_res20[0] & 0x1f;
          if (cVar4 == '\x01') {
            cVar4 = FUN_144f9f130(plVar9[3]);
            if ((cVar4 != '\0') && (cVar4 = FUN_144f9f130(plVar9[4]), cVar4 != '\0')) {
              uVar11 = 9;
LAB_144f9e8c2:
              lVar3 = plVar9[3];
              uVar1 = *(undefined2 *)((longlong)plVar9 + 10);
              lVar7 = plVar9[4];
              uVar2 = *(undefined2 *)((longlong)plVar9 + 0xc);
              (**(code **)(*plVar9 + 8))(plVar9,0);
              FUN_144f99960(plVar9,uVar11,uVar2,lVar7,uVar1,lVar3);
            }
          }
          else if (cVar4 == '\x02') {
            cVar4 = FUN_144f9f130(plVar9[3]);
            if ((cVar4 != '\0') && (cVar4 = FUN_144f9f130(plVar9[4]), cVar4 != '\0')) {
              uVar11 = 7;
              if (uVar8 == 2) {
                uVar11 = 9;
              }
              goto LAB_144f9e8c2;
            }
          }
          else if ((cVar4 == '\x03') && (uVar8 == 5)) {
            lVar3 = plVar9[3];
            puVar6 = (undefined4 *)FUN_144bef800(lVar3,local_34);
            lVar7 = 0;
            if (((byte)*puVar6 & 0x1f) == 5) {
              lVar7 = lVar3;
            }
            cVar4 = FUN_144f9f090(lVar7);
            if (cVar4 != '\0') {
              lVar3 = plVar9[4];
              puVar6 = (undefined4 *)FUN_144bef800(lVar3,local_30);
              lVar7 = 0;
              if (((byte)*puVar6 & 0x1f) == 5) {
                lVar7 = lVar3;
              }
              cVar4 = FUN_144f9f090(lVar7);
              if (cVar4 != '\0') {
                uVar11 = 8;
                goto LAB_144f9e8c2;
              }
            }
          }
        }
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f9e940 FUN_144f9e940 body=71 status=ok
// SIG undefined FUN_144f9e940(void)

undefined8 * FUN_144f9e940(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f9e990 FUN_144f9e990 body=14 status=ok
// SIG undefined FUN_144f9e990(void)

undefined8 * FUN_144f9e990(undefined8 *param_1)

{
  *param_1 = hkTypeVm::CheckTypeKindsPass::vftable;
  return param_1;
}



// FUNCTION 144f9e9a0 FUN_144f9e9a0 body=1277 status=ok
// SIG undefined FUN_144f9e9a0(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_144f9e9a0(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_res18 [4];
  undefined1 local_268 [4];
  uint local_264;
  uint local_260;
  uint local_25c;
  undefined8 local_258;
  undefined8 local_250;
  ulonglong local_248;
  ulonglong local_240 [2];
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  ulonglong *local_218;
  code *local_210;
  uint *local_208;
  code *local_200;
  uint *local_1f8;
  code *local_1f0;
  ulonglong *local_1e8;
  code *local_1e0;
  uint *local_1d8;
  undefined1 local_1d0 [80];
  undefined1 local_180 [344];
  
  lVar7 = *param_3;
  lVar8 = (longlong)(int)param_3[1] * 0x38 + lVar7;
  do {
    if (lVar7 == lVar8) {
      *param_2 = 0;
      return param_2;
    }
    if (((*(char *)(lVar7 + 8) != '\n') && ((byte)(*(char *)(lVar7 + 8) - 1U) < 0xc)) &&
       (lVar7 != 0)) {
      lVar2 = *(longlong *)(lVar7 + 0x18);
      uVar6 = *(undefined8 *)(lVar7 + 0x20);
      if (*(char *)(lVar7 + 8) == '\t') {
        puVar5 = (uint *)FUN_144bef800(lVar2,local_res18);
        uVar1 = *puVar5;
        puVar5 = (uint *)FUN_144bef800(uVar6,&local_25c);
        if ((((uVar1 & 0x1f) == 2) && ((*puVar5 & 0x1f) == 4)) ||
           (((*puVar5 & 0x1f) == 2 && (((uVar1 & 0x1f) - 2 & 0xfffffffd) == 0)))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) {
LAB_144f9ea5b:
          local_250 = *(undefined8 *)(lVar7 + 0x18);
          local_258 = *(undefined8 *)(lVar7 + 0x20);
          FUN_144bf0690(&local_248);
          FUN_144bf0690(local_240,local_258);
          if ((local_248 < 2) && (local_240[0] < 2)) {
            if ((DAT_14c79a0f0 < 2) && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_144f9ee91;
            cVar4 = FUN_144bdbf80();
            if (cVar4 == '\0') {
              puVar5 = (uint *)FUN_144bef800(local_258,local_268);
              local_264 = *puVar5 & 0x1f;
              puVar5 = (uint *)FUN_144bef800(local_250,local_268);
              local_res18[0] = *puVar5 & 0x1f;
              uVar6 = FUN_144bdc640(local_1d0,&DAT_14c79a0a0,2);
              local_240[1] = 4;
              local_230 = FUN_144bf0db0;
              local_228 = &local_250;
              local_210 = FUN_144bf0db0;
              local_218 = (ulonglong *)local_res18;
              local_208 = (uint *)&local_258;
              local_1f8 = &local_264;
              local_220 = FUN_144c19e60;
              local_200 = FUN_144c19e60;
              lVar7 = FUN_144bdc480(uVar6,"Cannot convert {}, {} to {}, {}",local_240 + 1,0);
              *(char **)(lVar7 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompilerPasses.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x1ca;
              FUN_144bdc690(local_1d0);
              *param_2 = 0x80040200;
              return param_2;
            }
            puVar5 = (uint *)FUN_144bef800(local_258,local_268);
            local_25c = *puVar5 & 0x1f;
            puVar5 = (uint *)FUN_144bef800(local_250,local_268);
            local_260 = *puVar5 & 0x1f;
            uVar6 = FUN_144bdc810(local_180,&DAT_14c79a0a0,2);
            local_240[1] = 4;
            local_230 = FUN_144bf0db0;
            local_228 = &local_250;
            local_210 = FUN_144bf0db0;
            local_218 = (ulonglong *)&local_260;
            local_208 = (uint *)&local_258;
            local_1f8 = &local_25c;
            local_220 = FUN_144c19e60;
            local_200 = FUN_144c19e60;
            lVar7 = FUN_144bdc480(uVar6,"Cannot convert {}, {} to {}, {}",local_240 + 1,0);
            *(undefined8 *)(lVar7 + 0x40) = 0x1ca;
          }
          else {
            if ((DAT_14c79a0f0 < 2) && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_144f9ee91;
            cVar4 = FUN_144bdbf80();
            if (cVar4 == '\0') {
              puVar5 = (uint *)FUN_144bef800(local_258,local_268);
              local_25c = *puVar5 & 0x1f;
              puVar5 = (uint *)FUN_144bef800(local_250,local_268);
              local_res18[0] = *puVar5 & 0x1f;
              uVar6 = FUN_144bdc640(local_1d0,&DAT_14c79a0a0,2);
              local_240[1] = 6;
              local_230 = FUN_144bf0db0;
              local_200 = FUN_144bf0db0;
              local_208 = local_res18;
              local_1f8 = (uint *)&local_258;
              local_220 = FUN_144f82010;
              local_228 = &local_250;
              local_1e8 = local_240;
              local_218 = &local_248;
              local_1d8 = &local_25c;
              local_210 = FUN_144c19e60;
              local_1f0 = FUN_144f82010;
              local_1e0 = FUN_144c19e60;
              lVar7 = FUN_144bdc480(uVar6,"Cannot convert {} ({}), {} to {} ({}), {}",local_240 + 1,
                                    0);
              *(char **)(lVar7 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompilerPasses.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x1c5;
              FUN_144bdc690(local_1d0);
              *param_2 = 0x80040200;
              return param_2;
            }
            puVar5 = (uint *)FUN_144bef800(local_258,local_268);
            local_264 = *puVar5 & 0x1f;
            puVar5 = (uint *)FUN_144bef800(local_250,local_268);
            local_260 = *puVar5 & 0x1f;
            uVar6 = FUN_144bdc810(local_180,&DAT_14c79a0a0,2);
            local_240[1] = 6;
            local_230 = FUN_144bf0db0;
            local_200 = FUN_144bf0db0;
            local_208 = &local_260;
            local_1f8 = (uint *)&local_258;
            local_220 = FUN_144f82010;
            local_228 = &local_250;
            local_1e8 = local_240;
            local_218 = &local_248;
            local_1d8 = &local_264;
            local_210 = FUN_144c19e60;
            local_1f0 = FUN_144f82010;
            local_1e0 = FUN_144c19e60;
            lVar7 = FUN_144bdc480(uVar6,"Cannot convert {} ({}), {} to {} ({}), {}",local_240 + 1,0)
            ;
            *(undefined8 *)(lVar7 + 0x40) = 0x1c5;
          }
          *(char **)(lVar7 + 0x38) = "Reflect\\TypeVm\\hkTypeVmCompilerPasses.cpp";
          FUN_144bdc8a0(local_180);
LAB_144f9ee91:
          *param_2 = 0x80040200;
          return param_2;
        }
      }
      else if (lVar2 != 0) {
        puVar5 = (uint *)FUN_144bef800(lVar2,&local_260);
        uVar1 = *puVar5;
        puVar5 = (uint *)FUN_144bef800(uVar6,&local_264);
        if (((uVar1 ^ *puVar5) & 0x1f) != 0) goto LAB_144f9ea5b;
      }
    }
    lVar7 = lVar7 + 0x38;
  } while( true );
}



// FUNCTION 144f9eea0 FUN_144f9eea0 body=71 status=ok
// SIG undefined FUN_144f9eea0(void)

undefined8 * FUN_144f9eea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f9eef0 FUN_144f9eef0 body=14 status=ok
// SIG undefined FUN_144f9eef0(void)

undefined8 * FUN_144f9eef0(undefined8 *param_1)

{
  *param_1 = hkTypeVm::GenerateConvertNumericKindPass::vftable;
  return param_1;
}



// FUNCTION 144f9ef00 FUN_144f9ef00 body=316 status=ok
// SIG undefined FUN_144f9ef00(void)

undefined4 * FUN_144f9ef00(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  plVar9 = (longlong *)*param_3;
  plVar11 = plVar9 + (longlong)(int)param_3[1] * 7;
  if (plVar9 == plVar11) {
    *param_2 = 0;
    return param_2;
  }
  do {
    if ((((char)plVar9[1] != '\n') && ((byte)((char)plVar9[1] - 1U) < 0xc)) &&
       (plVar9 != (longlong *)0x0)) {
      lVar3 = plVar9[4];
      puVar7 = (uint *)FUN_144bef800(plVar9[3],local_res10);
      uVar10 = *puVar7 & 0x1f;
      puVar7 = (uint *)FUN_144bef800(lVar3,local_res18);
      uVar8 = *puVar7 & 0x1f;
      if (uVar10 != uVar8) {
        if (((uVar10 - 2 & 0xfffffffc) == 0) && (uVar10 != 3)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (((uVar8 - 2 & 0xfffffffc) == 0) && (uVar8 != 3)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if ((bVar5) && (bVar6)) {
          lVar3 = plVar9[3];
          uVar1 = *(undefined2 *)((longlong)plVar9 + 10);
          lVar4 = plVar9[4];
          uVar2 = *(undefined2 *)((longlong)plVar9 + 0xc);
          (**(code **)(*plVar9 + 8))(plVar9,0);
          FUN_144f99960(plVar9,10,uVar2,lVar4,uVar1,lVar3);
        }
      }
    }
    plVar9 = plVar9 + 7;
  } while (plVar9 != plVar11);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f9f040 FUN_144f9f040 body=71 status=ok
// SIG undefined FUN_144f9f040(void)

undefined8 * FUN_144f9f040(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f9f090 FUN_144f9f090 body=154 status=ok
// SIG undefined FUN_144f9f090(void)

undefined4 FUN_144f9f090(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_res10 [24];
  
  puVar1 = (uint *)FUN_144bef800(param_1,local_res10);
  uVar3 = *puVar1;
  uVar2 = FUN_144beec90(param_1);
  if (((uVar3 >> 0xb & 0x1f) + 7 + (uVar3 >> 10 & 1) + (uVar3 >> 0x10 & 0xff) >> 3 == uVar2) &&
     ((((uVar3 == 0x174605 || (uVar3 == 0x345e05)) || (uVar3 == 0x74605)) ||
      (((uVar3 = uVar3 ^ 0x100, uVar3 == 0x174605 || (uVar3 == 0x345e05)) || (uVar3 == 0x74605))))))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 144f9f130 FUN_144f9f130 body=111 status=ok
// SIG undefined FUN_144f9f130(void)

undefined8 FUN_144f9f130(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_res10 [6];
  
  FUN_144bef800(param_1,local_res10);
  if (((local_res10[0] & 0x1f) - 2 & 0xfffffffd) != 0) {
    return 0;
  }
  if ((local_res10[0] >> 10 & 7) == 0) {
    uVar2 = (local_res10[0] >> 10) + 7 >> 3;
    if (uVar2 - 1 < 8) {
      uVar1 = FUN_144beec90(param_1);
      if (uVar2 == uVar1) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144f9f1a0 FUN_144f9f1a0 body=338 status=ok
// SIG undefined FUN_144f9f1a0(void)

ulonglong FUN_144f9f1a0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar9 = param_3;
  if (param_3 < uVar8) {
    uVar9 = uVar8;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar8 = uVar9 * 0x38;
  local_res8 = uVar8;
  local_res18 = uVar8;
  lVar3 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  uVar5 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    lVar4 = lVar3;
    lVar6 = lVar7;
    do {
      if (lVar4 != 0) {
        FUN_144f99900(lVar4,lVar6);
      }
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + 0x38;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    do {
      FUN_144f99950(lVar7);
      lVar7 = lVar7 + 0x38;
      uVar5 = uVar5 - 1;
      uVar8 = local_res18;
    } while (uVar5 != 0);
  }
  uVar5 = uVar8 + 0x38;
  if (uVar5 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar9 = uVar9 + 1;
    if (uVar5 <= local_res8) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res8 - uVar8;
      lVar7 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar5 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar9 = uVar9 + (((local_res8 - uVar8) - lVar7 >> 1) + lVar7 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (*DAT_14c787678)(*(undefined1 *)(local_res10 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar5;
}



// FUNCTION 144f9f300 FUN_144f9f300 body=18 status=ok
// SIG undefined FUN_144f9f300(void)

undefined8 * FUN_144f9f300(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c729c90;
  return param_2;
}



// FUNCTION 144f9f320 FUN_144f9f320 body=55 status=ok
// SIG undefined FUN_144f9f320(void)

void FUN_144f9f320(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14530b540(param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f9f360 FUN_144f9f360 body=75 status=ok
// SIG undefined FUN_144f9f360(void)

void FUN_144f9f360(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14530b5f0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f9f3b0 FUN_144f9f3b0 body=88 status=ok
// SIG undefined FUN_144f9f3b0(void)

void FUN_144f9f3b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f9f470 FUN_144f9f470 body=114 status=ok
// SIG undefined FUN_144f9f470(void)

void FUN_144f9f470(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-1] = 0xffffffff;
        *puVar1 = 1;
        puVar1[-2] = hkgpMeshMergeAssembly::vftable;
        FUN_144fa82a0(puVar1 + 2);
      }
      puVar1 = puVar1 + 0x16;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f9f4f0 FUN_144f9f4f0 body=149 status=ok
// SIG undefined FUN_144f9f4f0(void)

void FUN_144f9f4f0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 + 0x20;
    uVar2 = (ulonglong)param_4;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-1] = 0xffffffff;
        *puVar1 = 1;
        puVar1[-2] = hkgpMeshMergeAssembly::vftable;
        FUN_144fa8420(puVar1 + 2,param_2);
      }
      param_2 = param_2 + 0xb0;
      puVar1 = puVar1 + 0x16;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144f9f590 FUN_144f9f590 body=94 status=ok
// SIG undefined FUN_144f9f590(void)

void FUN_144f9f590(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xb0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x16;
      plVar2 = plVar2 + -0x16;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f9f5f0 FUN_144f9f5f0 body=74 status=ok
// SIG undefined FUN_144f9f5f0(void)

void FUN_144f9f5f0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    lVar1 = param_1 + 0x20;
    uVar2 = (ulonglong)param_4;
    do {
      FUN_144fa85e0(lVar1,(param_2 - param_1) + lVar1);
      lVar1 = lVar1 + 0xb0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144f9f6c0 FUN_144f9f6c0 body=138 status=ok
// SIG undefined FUN_144f9f6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144f9f6c0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < param_3) {
    puVar1 = (undefined8 *)(param_1 + 8);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 + -1 != (undefined8 *)0x0) {
        puVar1[-1] = 0;
        *puVar1 = 0;
        uVar5 = uRam000000014c6dae8c;
        uVar4 = uRam000000014c6dae88;
        uVar3 = uRam000000014c6dae84;
        *(uint *)(puVar1 + 1) = _DAT_14c6dae80;
        *(uint *)((longlong)puVar1 + 0xc) = uVar3;
        *(uint *)(puVar1 + 2) = uVar4;
        *(uint *)((longlong)puVar1 + 0x14) = uVar5;
        uVar3 = uRam000000014c6dae84 ^ 0x80000000;
        uVar4 = uRam000000014c6dae88 ^ 0x80000000;
        uVar5 = uRam000000014c6dae8c ^ 0x80000000;
        *(uint *)(puVar1 + 3) = _DAT_14c6dae80 ^ 0x80000000;
        *(uint *)((longlong)puVar1 + 0x1c) = uVar3;
        *(uint *)(puVar1 + 4) = uVar4;
        *(uint *)((longlong)puVar1 + 0x24) = uVar5;
        puVar1[8] = 0;
        puVar1[9] = 0;
        *(undefined2 *)(puVar1 + 10) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x52) = 0;
        *(undefined2 *)((longlong)puVar1 + 0x56) = 0;
        FUN_144bfbef0(puVar1 + 5,0,0x18);
      }
      puVar1 = puVar1 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f9f750 FUN_144f9f750 body=193 status=ok
// SIG undefined FUN_144f9f750(void)

void FUN_144f9f750(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      if (puVar1 + -0x12 != (undefined4 *)0x0) {
        FUN_144fa8130(puVar1 + -0x12,param_2 + -0x48 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)((longlong)puVar1 + param_2);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
        puVar1[3] = *(undefined4 *)(param_2 + 0xc + (longlong)puVar1);
        *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 0x10 + (longlong)puVar1);
        *(undefined1 *)((longlong)puVar1 + 0x11) =
             *(undefined1 *)(param_2 + 0x11 + (longlong)puVar1);
        *(undefined1 *)((longlong)puVar1 + 0x12) =
             *(undefined1 *)(param_2 + 0x12 + (longlong)puVar1);
        *(undefined1 *)((longlong)puVar1 + 0x13) =
             *(undefined1 *)(param_2 + 0x13 + (longlong)puVar1);
        *(undefined2 *)(puVar1 + 5) = *(undefined2 *)(param_2 + 0x14 + (longlong)puVar1);
        *(undefined1 *)((longlong)puVar1 + 0x16) =
             *(undefined1 *)(param_2 + 0x16 + (longlong)puVar1);
        *(undefined1 *)((longlong)puVar1 + 0x17) =
             *(undefined1 *)(param_2 + 0x17 + (longlong)puVar1);
        FUN_144bfbed0(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1,0x18);
      }
      puVar1 = puVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f9f840 FUN_144f9f840 body=241 status=ok
// SIG undefined FUN_144f9f840(void)

undefined8 * FUN_144f9f840(undefined8 *param_1,uint param_2)

{
  *param_1 = hkcdPlanarSolid::NodeStorage::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 5);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x28);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144f9f940 FUN_144f9f940 body=58 status=ok
// SIG undefined FUN_144f9f940(void)

void FUN_144f9f940(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14530b120(param_1);
      }
      param_1 = param_1 + 0xd98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f9f980 FUN_144f9f980 body=78 status=ok
// SIG undefined FUN_144f9f980(void)

void FUN_144f9f980(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14530b170(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xd98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f9f9d0 FUN_144f9f9d0 body=94 status=ok
// SIG undefined FUN_144f9f9d0(void)

void FUN_144f9f9d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xd98 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1b3;
      plVar2 = plVar2 + -0x1b3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f9fa90 FUN_144f9fa90 body=18 status=ok
// SIG undefined FUN_144f9fa90(void)

undefined8 * FUN_144f9fa90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72a0d0;
  return param_2;
}



// FUNCTION 144f9fae0 FUN_144f9fae0 body=183 status=ok
// SIG undefined FUN_144f9fae0(void)

void FUN_144f9fae0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -9) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -7) = 0xffffffff;
        *(undefined8 *)(puVar1 + 1) = 0;
        *(undefined8 *)(puVar1 + -5) = 1;
        *(undefined ***)(puVar1 + -9) = hkgpMeshMergeAssemblyImpl::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 3) = 0;
        puVar1[5] = 0;
        FUN_147e56b1c();
        *(undefined8 *)(puVar1 + 9) = 0;
        *(undefined8 *)(puVar1 + 7) = 0;
        puVar1[0xb] = 0;
        FUN_147e56b1c();
        puVar1[0x17] = 0x7fffffff;
        puVar1[0x18] = 0x80000000;
      }
      puVar1 = puVar1 + 0x24;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f9fba0 FUN_144f9fba0 body=18 status=ok
// SIG undefined FUN_144f9fba0(void)

undefined8 * FUN_144f9fba0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72a1b0;
  return param_2;
}



// FUNCTION 144f9fbc0 FUN_144f9fbc0 body=518 status=ok
// SIG undefined FUN_144f9fbc0(void)

void FUN_144f9fbc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar11 = (uint *)(param_1 + 0x20);
    lVar12 = (longlong)param_4;
    do {
      if (puVar11 + -8 != (uint *)0x0) {
        puVar11[-6] = 0xffffffff;
        puVar11[-5] = 0;
        puVar11[-4] = 1;
        puVar11[-3] = 0;
        *(undefined ***)(puVar11 + -8) = hkgpMeshMergeAssemblyImpl::vftable;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        *puVar11 = 0;
        puVar11[1] = 0x80000000;
        uVar3 = *(uint *)(param_2 + (longlong)puVar11);
        lVar4 = *(longlong *)(param_2 + -8 + (longlong)puVar11);
        if (0 < (int)uVar3) {
          plVar9 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0xc0);
          *(longlong **)(puVar11 + -2) = plVar9;
          plVar10 = (longlong *)(lVar4 + 0x30);
          *puVar11 = uVar3;
          uVar13 = (ulonglong)uVar3;
          puVar11[1] = uVar3;
          do {
            if (plVar9 != (longlong *)0x0) {
              lVar4 = plVar10[-6];
              *plVar9 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              lVar4 = plVar10[-3];
              plVar9[2] = plVar10[-4];
              plVar9[3] = lVar4;
              lVar4 = plVar10[-1];
              plVar9[4] = plVar10[-2];
              plVar9[5] = lVar4;
              lVar4 = plVar10[1];
              plVar9[6] = *plVar10;
              plVar9[7] = lVar4;
              lVar4 = plVar10[3];
              plVar9[8] = plVar10[2];
              plVar9[9] = lVar4;
              lVar4 = plVar10[5];
              plVar9[10] = plVar10[4];
              plVar9[0xb] = lVar4;
              lVar4 = plVar10[7];
              plVar9[0xc] = plVar10[6];
              plVar9[0xd] = lVar4;
              lVar4 = plVar10[9];
              plVar9[0xe] = plVar10[8];
              plVar9[0xf] = lVar4;
              lVar4 = plVar10[0xb];
              plVar9[0x10] = plVar10[10];
              plVar9[0x11] = lVar4;
              uVar5 = *(undefined4 *)((longlong)plVar10 + 100);
              lVar4 = plVar10[0xd];
              uVar6 = *(undefined4 *)((longlong)plVar10 + 0x6c);
              *(int *)(plVar9 + 0x12) = (int)plVar10[0xc];
              *(undefined4 *)((longlong)plVar9 + 0x94) = uVar5;
              *(int *)(plVar9 + 0x13) = (int)lVar4;
              *(undefined4 *)((longlong)plVar9 + 0x9c) = uVar6;
              lVar4 = plVar10[0xf];
              plVar9[0x14] = plVar10[0xe];
              plVar9[0x15] = lVar4;
              *(int *)(plVar9 + 0x16) = (int)plVar10[0x10];
              *(undefined4 *)((longlong)plVar9 + 0xb4) = *(undefined4 *)((longlong)plVar10 + 0x84);
              *(int *)(plVar9 + 0x17) = (int)plVar10[0x11];
              puVar1 = (undefined1 *)((longlong)plVar10 + 0x8c);
              plVar10 = plVar10 + 0x18;
              *(undefined1 *)((longlong)plVar9 + 0xbc) = *puVar1;
            }
            uVar13 = uVar13 - 1;
            plVar9 = plVar9 + 0x18;
          } while (uVar13 != 0);
        }
        FUN_144c29a10(puVar11 + 2,param_2 + 8 + (longlong)puVar11);
        FUN_144c29a10(puVar11 + 8,param_2 + 0x20 + (longlong)puVar11);
        puVar2 = (uint *)(param_2 + 0x40 + (longlong)puVar11);
        uVar3 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar11[0x10] = *puVar2;
        puVar11[0x11] = uVar3;
        puVar11[0x12] = uVar7;
        puVar11[0x13] = uVar8;
        puVar2 = (uint *)(param_2 + 0x50 + (longlong)puVar11);
        uVar3 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar11[0x14] = *puVar2;
        puVar11[0x15] = uVar3;
        puVar11[0x16] = uVar7;
        puVar11[0x17] = uVar8;
        puVar11[0x18] = *(uint *)(param_2 + 0x60 + (longlong)puVar11);
        puVar11[0x19] = *(uint *)(param_2 + 100 + (longlong)puVar11);
      }
      puVar11 = puVar11 + 0x24;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144f9fdd0 FUN_144f9fdd0 body=94 status=ok
// SIG undefined FUN_144f9fdd0(void)

void FUN_144f9fdd0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x90 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x12;
      plVar2 = plVar2 + -0x12;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f9fe30 FUN_144f9fe30 body=875 status=ok
// SIG undefined FUN_144f9fe30(void)

void FUN_144f9fe30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar16 = (undefined4 *)(param_1 + 0x38);
    local_38 = (longlong)param_4;
    do {
      plVar12 = (longlong *)(param_2 + -0x20 + (longlong)puVar16);
      plVar18 = (longlong *)(puVar16 + -8);
      if (plVar12 != plVar18) {
        lVar5 = *plVar12;
        iVar4 = *(int *)(param_2 + -0x18 + (longlong)puVar16);
        if ((int)(puVar16[-5] & 0x7fffffff) < iVar4) {
          FUN_144fa9850(plVar18,&PTR_vftable_14c6e47a0,(longlong)iVar4);
        }
        if (iVar4 < (int)puVar16[-6]) {
          lVar17 = *plVar18;
          plVar12 = (longlong *)((longlong)(int)puVar16[-6] * 0xc0 + *plVar18);
          while (plVar12 != (longlong *)((longlong)iVar4 * 0xc0 + lVar17)) {
            plVar12 = plVar12 + -0x18;
            if (*plVar12 != 0) {
              FUN_144b3f230();
            }
          }
        }
        lVar17 = *plVar18;
        iVar7 = iVar4;
        if ((int)puVar16[-6] < iVar4) {
          iVar7 = puVar16[-6];
        }
        if ((lVar17 != lVar5) && (lVar14 = (longlong)iVar7, 0 < iVar7)) {
          puVar13 = (undefined8 *)(lVar17 + 0x20);
          lVar17 = lVar5 - lVar17;
          do {
            lVar6 = *(longlong *)(lVar17 + -0x20 + (longlong)puVar13);
            if (puVar13[-4] != lVar6) {
              if (lVar6 != 0) {
                FUN_144b3d910();
              }
              lVar6 = puVar13[-4];
              puVar13[-4] = *(undefined8 *)(lVar17 + -0x20 + (longlong)puVar13);
              if (lVar6 != 0) {
                FUN_144b3f230();
              }
            }
            puVar2 = (undefined8 *)(lVar17 + -0x10 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[-2] = *puVar2;
            puVar13[-1] = uVar11;
            uVar11 = ((undefined8 *)((longlong)puVar13 + lVar17))[1];
            *puVar13 = *(undefined8 *)((longlong)puVar13 + lVar17);
            puVar13[1] = uVar11;
            puVar2 = (undefined8 *)(lVar17 + 0x10 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[2] = *puVar2;
            puVar13[3] = uVar11;
            puVar2 = (undefined8 *)(lVar17 + 0x20 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[4] = *puVar2;
            puVar13[5] = uVar11;
            puVar2 = (undefined8 *)(lVar17 + 0x30 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[6] = *puVar2;
            puVar13[7] = uVar11;
            puVar2 = (undefined8 *)(lVar17 + 0x40 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[8] = *puVar2;
            puVar13[9] = uVar11;
            puVar2 = (undefined8 *)(lVar17 + 0x50 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[10] = *puVar2;
            puVar13[0xb] = uVar11;
            puVar2 = (undefined8 *)(lVar17 + 0x60 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[0xc] = *puVar2;
            puVar13[0xd] = uVar11;
            puVar3 = (undefined4 *)(lVar17 + 0x70 + (longlong)puVar13);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            *(undefined4 *)(puVar13 + 0xe) = *puVar3;
            *(undefined4 *)((longlong)puVar13 + 0x74) = uVar8;
            *(undefined4 *)(puVar13 + 0xf) = uVar9;
            *(undefined4 *)((longlong)puVar13 + 0x7c) = uVar10;
            puVar2 = (undefined8 *)(lVar17 + 0x80 + (longlong)puVar13);
            uVar11 = puVar2[1];
            puVar13[0x10] = *puVar2;
            puVar13[0x11] = uVar11;
            *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(lVar17 + 0x90 + (longlong)puVar13);
            *(undefined4 *)((longlong)puVar13 + 0x94) =
                 *(undefined4 *)(lVar17 + 0x94 + (longlong)puVar13);
            *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(lVar17 + 0x98 + (longlong)puVar13);
            *(undefined1 *)((longlong)puVar13 + 0x9c) =
                 *(undefined1 *)(lVar17 + 0x9c + (longlong)puVar13);
            puVar13 = puVar13 + 0x18;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        plVar18 = (longlong *)(lVar5 + (longlong)iVar7 * 0xc0);
        if (0 < iVar4 - iVar7) {
          plVar12 = plVar18 + 6;
          uVar19 = (ulonglong)(uint)(iVar4 - iVar7);
          plVar15 = (longlong *)(*(longlong *)(puVar16 + -8) + (longlong)iVar7 * 0xc0);
          do {
            if (plVar15 != (longlong *)0x0) {
              lVar5 = *plVar18;
              *plVar15 = lVar5;
              if (lVar5 != 0) {
                FUN_144b3d910();
              }
              lVar5 = plVar12[-3];
              plVar18 = plVar18 + 0x18;
              plVar15[2] = plVar12[-4];
              plVar15[3] = lVar5;
              lVar5 = plVar12[-1];
              plVar15[4] = plVar12[-2];
              plVar15[5] = lVar5;
              lVar5 = plVar12[1];
              plVar15[6] = *plVar12;
              plVar15[7] = lVar5;
              lVar5 = plVar12[3];
              plVar15[8] = plVar12[2];
              plVar15[9] = lVar5;
              lVar5 = plVar12[5];
              plVar15[10] = plVar12[4];
              plVar15[0xb] = lVar5;
              lVar5 = plVar12[7];
              plVar15[0xc] = plVar12[6];
              plVar15[0xd] = lVar5;
              lVar5 = plVar12[9];
              plVar15[0xe] = plVar12[8];
              plVar15[0xf] = lVar5;
              lVar5 = plVar12[0xb];
              plVar15[0x10] = plVar12[10];
              plVar15[0x11] = lVar5;
              uVar8 = *(undefined4 *)((longlong)plVar12 + 100);
              lVar5 = plVar12[0xd];
              uVar9 = *(undefined4 *)((longlong)plVar12 + 0x6c);
              *(int *)(plVar15 + 0x12) = (int)plVar12[0xc];
              *(undefined4 *)((longlong)plVar15 + 0x94) = uVar8;
              *(int *)(plVar15 + 0x13) = (int)lVar5;
              *(undefined4 *)((longlong)plVar15 + 0x9c) = uVar9;
              lVar5 = plVar12[0xf];
              plVar15[0x14] = plVar12[0xe];
              plVar15[0x15] = lVar5;
              *(int *)(plVar15 + 0x16) = (int)plVar12[0x10];
              *(undefined4 *)((longlong)plVar15 + 0xb4) = *(undefined4 *)((longlong)plVar12 + 0x84);
              *(int *)(plVar15 + 0x17) = (int)plVar12[0x11];
              puVar1 = (undefined1 *)((longlong)plVar12 + 0x8c);
              plVar12 = plVar12 + 0x18;
              *(undefined1 *)((longlong)plVar15 + 0xbc) = *puVar1;
            }
            uVar19 = uVar19 - 1;
            plVar15 = plVar15 + 0x18;
          } while (uVar19 != 0);
        }
        puVar16[-6] = iVar4;
      }
      FUN_144d0efe0(puVar16 + -4,param_2 + -0x10 + (longlong)puVar16);
      *puVar16 = *(undefined4 *)((longlong)puVar16 + param_2);
      *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar16);
      FUN_144d0efe0(puVar16 + 2,param_2 + 8 + (longlong)puVar16);
      puVar16[6] = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar16);
      *(undefined1 *)(puVar16 + 7) = *(undefined1 *)(param_2 + 0x1c + (longlong)puVar16);
      puVar3 = (undefined4 *)(param_2 + 0x28 + (longlong)puVar16);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar16[10] = *puVar3;
      puVar16[0xb] = uVar8;
      puVar16[0xc] = uVar9;
      puVar16[0xd] = uVar10;
      puVar3 = (undefined4 *)(param_2 + 0x38 + (longlong)puVar16);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar16[0xe] = *puVar3;
      puVar16[0xf] = uVar8;
      puVar16[0x10] = uVar9;
      puVar16[0x11] = uVar10;
      puVar16[0x12] = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar16);
      puVar16[0x13] = *(undefined4 *)(param_2 + 0x4c + (longlong)puVar16);
      puVar16 = puVar16 + 0x24;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  return;
}



// FUNCTION 144fa0250 FUN_144fa0250 body=278 status=ok
// SIG undefined FUN_144fa0250(void)

longlong FUN_144fa0250(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (*(longlong *)(param_1 + 0x78) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x78),
               (ulonglong)(*(uint *)(param_1 + 0x84) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(longlong *)(param_1 + 0x68) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x68),
               *(uint *)(param_1 + 0x74) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_144b3f230();
  }
  if (*(int *)(param_1 + 0x54) < 0) {
    lVar1 = param_1 + 0x48 + *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar1 = 0;
    }
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_144b3e940(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 144fa0390 FUN_144fa0390 body=61 status=ok
// SIG undefined FUN_144fa0390(void)

undefined8 FUN_144fa0390(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144fa0420 FUN_144fa0420 body=80 status=ok
// SIG undefined FUN_144fa0420(void)

void FUN_144fa0420(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa0470 FUN_144fa0470 body=63 status=ok
// SIG undefined FUN_144fa0470(void)

void FUN_144fa0470(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144fa04b0 FUN_144fa04b0 body=97 status=ok
// SIG undefined FUN_144fa04b0(void)

void FUN_144fa04b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa0550 FUN_144fa0550 body=80 status=ok
// SIG undefined FUN_144fa0550(void)

void FUN_144fa0550(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa05a0 FUN_144fa05a0 body=63 status=ok
// SIG undefined FUN_144fa05a0(void)

void FUN_144fa05a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144fa05e0 FUN_144fa05e0 body=97 status=ok
// SIG undefined FUN_144fa05e0(void)

void FUN_144fa05e0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa0680 FUN_144fa0680 body=80 status=ok
// SIG undefined FUN_144fa0680(void)

void FUN_144fa0680(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa06d0 FUN_144fa06d0 body=63 status=ok
// SIG undefined FUN_144fa06d0(void)

void FUN_144fa06d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144fa0710 FUN_144fa0710 body=97 status=ok
// SIG undefined FUN_144fa0710(void)

void FUN_144fa0710(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa07b0 FUN_144fa07b0 body=80 status=ok
// SIG undefined FUN_144fa07b0(void)

void FUN_144fa07b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa0800 FUN_144fa0800 body=63 status=ok
// SIG undefined FUN_144fa0800(void)

void FUN_144fa0800(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144fa0840 FUN_144fa0840 body=97 status=ok
// SIG undefined FUN_144fa0840(void)

void FUN_144fa0840(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa08b0 FUN_144fa08b0 body=87 status=ok
// SIG undefined FUN_144fa08b0(void)

undefined8 FUN_144fa08b0(undefined8 param_1,ulonglong param_2)

{
  FUN_144fa8320();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144fa0970 FUN_144fa0970 body=391 status=ok
// SIG undefined FUN_144fa0970(void)

void FUN_144fa0970(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar6 = (uint *)(param_1 + 0x24);
    lVar7 = (longlong)param_4;
    do {
      if (puVar6 + -9 != (uint *)0x0) {
        puVar6[-7] = 0xffffffff;
        puVar6[-6] = 0;
        puVar6[-5] = 1;
        puVar6[-4] = 0;
        *(undefined ***)(puVar6 + -9) = hkcdPlanarGeometryPrimitives::Collection<28>::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar6);
        puVar8 = *(undefined4 **)(param_2 + -0xc + (longlong)puVar6);
        if (0 < (int)uVar2) {
          puVar5 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar6 + -3) = puVar5;
          puVar6[-1] = uVar2;
          uVar9 = (ulonglong)uVar2;
          *puVar6 = uVar2;
          do {
            if (puVar5 != (undefined4 *)0x0) {
              uVar3 = *puVar8;
              puVar8 = puVar8 + 1;
              *puVar5 = uVar3;
            }
            uVar9 = uVar9 - 1;
            puVar5 = puVar5 + 1;
          } while (uVar9 != 0);
        }
        puVar6[1] = *(uint *)(param_2 + 4 + (longlong)puVar6);
        puVar1 = (undefined8 *)((longlong)puVar6 + param_2 + 8);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar6 + 2) = *puVar1;
        *(undefined8 *)(puVar6 + 4) = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + param_2 + 0x18);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar6 + 6) = *puVar1;
        *(undefined8 *)(puVar6 + 8) = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + param_2 + 0x28);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar6 + 10) = *puVar1;
        *(undefined8 *)(puVar6 + 0xc) = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + param_2 + 0x38);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar6 + 0xe) = *puVar1;
        *(undefined8 *)(puVar6 + 0x10) = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + param_2 + 0x48);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar6 + 0x12) = *puVar1;
        *(undefined8 *)(puVar6 + 0x14) = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + param_2 + 0x58);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar6 + 0x16) = *puVar1;
        *(undefined8 *)(puVar6 + 0x18) = uVar4;
        *(undefined8 *)(puVar6 + 0x1a) = *(undefined8 *)((longlong)puVar6 + param_2 + 0x68);
        memcpy(puVar6 + 0x1c,(void *)(param_2 + 0x70 + (longlong)puVar6),0xd00);
      }
      puVar6 = puVar6 + 0x366;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa0b00 FUN_144fa0b00 body=94 status=ok
// SIG undefined FUN_144fa0b00(void)

void FUN_144fa0b00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xd98 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1b3;
      plVar2 = plVar2 + -0x1b3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa0b60 FUN_144fa0b60 body=218 status=ok
// SIG undefined FUN_144fa0b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fa0b60(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < param_3) {
    param_1 = param_1 + 0x54;
    lVar2 = (longlong)param_3;
    do {
      puVar1 = (undefined8 *)(param_1 + -0x54);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_144b3e890(puVar1);
        *puVar1 = hkgpMeshMergeAssemblyImpl::GeometryData::vftable;
        *(undefined8 *)(param_1 + -0xc) = 0;
        *(undefined4 *)(param_1 + -0x1c) = 0;
        *(undefined4 *)(param_1 + -0x18) = 0xffffffff;
        *(undefined4 *)(param_1 + -0x14) = 0x7fffffff;
        *(undefined4 *)(param_1 + -0x10) = 0x80000000;
        *(undefined8 *)(param_1 + -4) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        FUN_147e56b1c();
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0x80000000;
        *(undefined8 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0x80000000;
        uVar5 = uRam000000014c6dae8c;
        uVar4 = uRam000000014c6dae88;
        uVar3 = uRam000000014c6dae84;
        *(uint *)(param_1 + 0x3c) = _DAT_14c6dae80;
        *(uint *)(param_1 + 0x40) = uVar3;
        *(uint *)(param_1 + 0x44) = uVar4;
        *(uint *)(param_1 + 0x48) = uVar5;
        uVar3 = uRam000000014c6dae84 ^ 0x80000000;
        uVar4 = uRam000000014c6dae88 ^ 0x80000000;
        uVar5 = uRam000000014c6dae8c ^ 0x80000000;
        *(uint *)(param_1 + 0x4c) = _DAT_14c6dae80 ^ 0x80000000;
        *(uint *)(param_1 + 0x50) = uVar3;
        *(uint *)(param_1 + 0x54) = uVar4;
        *(uint *)(param_1 + 0x58) = uVar5;
      }
      param_1 = param_1 + 0xb0;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa0c40 FUN_144fa0c40 body=408 status=ok
// SIG undefined FUN_144fa0c40(void)

void FUN_144fa0c40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x24);
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    do {
      puVar3 = (uint *)(param_2 + -0xc + (longlong)puVar6);
      puVar4 = puVar6 + -3;
      if (puVar3 != puVar4) {
        uVar2 = *(undefined8 *)puVar3;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar6);
        if ((int)(*puVar6 & 0x7fffffff) < (int)uVar1) {
          FUN_141807e20(puVar4,&PTR_vftable_14c6e47a0,(longlong)(int)uVar1);
        }
        FUN_144b3d470(*(undefined8 *)puVar4,uVar2,(longlong)(int)uVar1 * 4);
        puVar6[-1] = uVar1;
      }
      lVar5 = 0x1a0;
      puVar6[1] = *(uint *)(param_2 + 4 + (longlong)puVar6);
      puVar6[2] = *(uint *)((longlong)puVar6 + param_2 + 8);
      puVar6[3] = *(uint *)((longlong)puVar6 + param_2 + 0xc);
      puVar6[4] = *(uint *)((longlong)puVar6 + param_2 + 0x10);
      puVar6[5] = *(uint *)((longlong)puVar6 + param_2 + 0x14);
      puVar6[6] = *(uint *)((longlong)puVar6 + param_2 + 0x18);
      puVar6[7] = *(uint *)((longlong)puVar6 + param_2 + 0x1c);
      puVar6[8] = *(uint *)((longlong)puVar6 + param_2 + 0x20);
      puVar6[9] = *(uint *)((longlong)puVar6 + param_2 + 0x24);
      puVar6[10] = *(uint *)((longlong)puVar6 + param_2 + 0x28);
      puVar6[0xb] = *(uint *)((longlong)puVar6 + param_2 + 0x2c);
      puVar6[0xc] = *(uint *)((longlong)puVar6 + param_2 + 0x30);
      puVar6[0xd] = *(uint *)((longlong)puVar6 + param_2 + 0x34);
      puVar6[0xe] = *(uint *)((longlong)puVar6 + param_2 + 0x38);
      puVar6[0xf] = *(uint *)((longlong)puVar6 + param_2 + 0x3c);
      puVar6[0x10] = *(uint *)((longlong)puVar6 + param_2 + 0x40);
      puVar6[0x11] = *(uint *)((longlong)puVar6 + param_2 + 0x44);
      puVar6[0x12] = *(uint *)((longlong)puVar6 + param_2 + 0x48);
      puVar6[0x13] = *(uint *)((longlong)puVar6 + param_2 + 0x4c);
      puVar6[0x14] = *(uint *)((longlong)puVar6 + param_2 + 0x50);
      puVar6[0x15] = *(uint *)((longlong)puVar6 + param_2 + 0x54);
      puVar6[0x16] = *(uint *)((longlong)puVar6 + param_2 + 0x58);
      puVar6[0x17] = *(uint *)((longlong)puVar6 + param_2 + 0x5c);
      puVar6[0x18] = *(uint *)((longlong)puVar6 + param_2 + 0x60);
      puVar6[0x19] = *(uint *)((longlong)puVar6 + param_2 + 100);
      puVar6[0x1a] = *(uint *)((longlong)puVar6 + param_2 + 0x68);
      puVar6[0x1b] = *(uint *)((longlong)puVar6 + param_2 + 0x6c);
      puVar4 = puVar6 + 0x1c;
      do {
        *puVar4 = *(uint *)(param_2 + (longlong)puVar4);
        puVar4[1] = *(uint *)(param_2 + 4 + (longlong)puVar4);
        puVar4 = puVar4 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      puVar6 = puVar6 + 0x366;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa0de0 FUN_144fa0de0 body=63 status=ok
// SIG undefined FUN_144fa0de0(void)

void FUN_144fa0de0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1453101a0(param_1,0,0,0);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa0e20 FUN_144fa0e20 body=596 status=ok
// SIG undefined FUN_144fa0e20(void)

void FUN_144fa0e20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar11 = (uint *)(param_1 + 0x84);
    lVar12 = (longlong)param_4;
    do {
      puVar1 = puVar11 + -0x21;
      if (puVar1 != (uint *)0x0) {
        FUN_144bde880(puVar1,param_2 + -0x84 + (longlong)puVar11);
        *(undefined ***)puVar1 = hkgpMeshMergeAssemblyImpl::GeometryData::vftable;
        puVar11[-0x13] = *(uint *)(param_2 + -0x4c + (longlong)puVar11);
        puVar11[-0x12] = *(uint *)(param_2 + -0x48 + (longlong)puVar11);
        puVar11[-0x11] = *(uint *)(param_2 + -0x44 + (longlong)puVar11);
        puVar11[-0x10] = *(uint *)(param_2 + -0x40 + (longlong)puVar11);
        FUN_144c29a10(puVar11 + -0xf,param_2 + -0x3c + (longlong)puVar11);
        lVar4 = *(longlong *)(param_2 + -0x24 + (longlong)puVar11);
        *(longlong *)(puVar11 + -9) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        puVar11[-7] = 0;
        puVar11[-6] = 0;
        puVar11[-5] = 0;
        puVar11[-4] = 0x80000000;
        uVar3 = *(uint *)(param_2 + -0x14 + (longlong)puVar11);
        puVar13 = *(undefined1 **)(param_2 + -0x1c + (longlong)puVar11);
        if (0 < (int)uVar3) {
          puVar9 = (undefined1 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
          *(undefined1 **)(puVar11 + -7) = puVar9;
          puVar11[-5] = uVar3;
          uVar15 = (ulonglong)uVar3;
          puVar11[-4] = uVar3;
          do {
            if (puVar9 != (undefined1 *)0x0) {
              uVar2 = *puVar13;
              puVar13 = puVar13 + 1;
              *puVar9 = uVar2;
            }
            uVar15 = uVar15 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar15 != 0);
        }
        puVar11[-3] = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar11);
        puVar14 = *(undefined8 **)((longlong)puVar11 + param_2 + -0xc);
        if (0 < (int)uVar3) {
          puVar10 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 4);
          *(undefined8 **)(puVar11 + -3) = puVar10;
          uVar15 = (ulonglong)uVar3;
          puVar11[-1] = uVar3;
          *puVar11 = uVar3;
          do {
            if (puVar10 != (undefined8 *)0x0) {
              uVar7 = *puVar14;
              uVar8 = puVar14[1];
              puVar14 = puVar14 + 2;
              *puVar10 = uVar7;
              puVar10[1] = uVar8;
            }
            uVar15 = uVar15 - 1;
            puVar10 = puVar10 + 2;
          } while (uVar15 != 0);
        }
        puVar1 = (uint *)(param_2 + 0xc + (longlong)puVar11);
        uVar3 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar11[3] = *puVar1;
        puVar11[4] = uVar3;
        puVar11[5] = uVar5;
        puVar11[6] = uVar6;
        puVar1 = (uint *)(param_2 + 0x1c + (longlong)puVar11);
        uVar3 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar11[7] = *puVar1;
        puVar11[8] = uVar3;
        puVar11[9] = uVar5;
        puVar11[10] = uVar6;
      }
      puVar11 = puVar11 + 0x2c;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144fa1080 FUN_144fa1080 body=75 status=ok
// SIG undefined FUN_144fa1080(void)

void FUN_144fa1080(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1453102b0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa10d0 FUN_144fa10d0 body=18 status=ok
// SIG undefined FUN_144fa10d0(void)

undefined8 * FUN_144fa10d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72a570;
  return param_2;
}



// FUNCTION 144fa10f0 FUN_144fa10f0 body=94 status=ok
// SIG undefined FUN_144fa10f0(void)

void FUN_144fa10f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xb0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x16;
      plVar2 = plVar2 + -0x16;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa1150 FUN_144fa1150 body=77 status=ok
// SIG undefined FUN_144fa1150(void)

void FUN_144fa1150(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa11a0 FUN_144fa11a0 body=405 status=ok
// SIG undefined FUN_144fa11a0(void)

void FUN_144fa11a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  if (0 < param_4) {
    puVar10 = (undefined4 *)(param_1 + 0x58);
    param_2 = param_2 - param_1;
    lVar11 = (longlong)param_4;
    do {
      FUN_144bde9a0(puVar10 + -0x16,param_2 + -0x58 + (longlong)puVar10);
      puVar10[-8] = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar10);
      puVar10[-7] = *(undefined4 *)(param_2 + -0x1c + (longlong)puVar10);
      puVar10[-6] = *(undefined4 *)((longlong)puVar10 + param_2 + -0x18);
      puVar10[-5] = *(undefined4 *)((longlong)puVar10 + param_2 + -0x14);
      FUN_144d0efe0(puVar10 + -4,param_2 + -0x10 + (longlong)puVar10);
      *puVar10 = *(undefined4 *)((longlong)puVar10 + param_2);
      *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar10);
      lVar4 = *(longlong *)((longlong)puVar10 + param_2 + 8);
      if (*(longlong *)(puVar10 + 2) != lVar4) {
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        lVar4 = *(longlong *)(puVar10 + 2);
        *(undefined8 *)(puVar10 + 2) = *(undefined8 *)((longlong)puVar10 + param_2 + 8);
        if (lVar4 != 0) {
          FUN_144b3f230();
        }
      }
      puVar9 = (undefined8 *)(param_2 + 0x10 + (longlong)puVar10);
      puVar1 = (undefined8 *)(puVar10 + 4);
      if (puVar9 != puVar1) {
        uVar5 = *puVar9;
        iVar3 = *(int *)(param_2 + 0x18 + (longlong)puVar10);
        if ((int)(puVar10[7] & 0x7fffffff) < iVar3) {
          FUN_144c6d4d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3);
        puVar10[6] = iVar3;
      }
      puVar9 = (undefined8 *)(param_2 + 0x20 + (longlong)puVar10);
      puVar1 = (undefined8 *)(puVar10 + 8);
      if (puVar9 != puVar1) {
        uVar5 = *puVar9;
        iVar3 = *(int *)(param_2 + 0x28 + (longlong)puVar10);
        if ((int)(puVar10[0xb] & 0x7fffffff) < iVar3) {
          FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 << 4);
        puVar10[10] = iVar3;
      }
      puVar2 = (undefined4 *)((longlong)puVar10 + param_2 + 0x38);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar10[0xe] = *puVar2;
      puVar10[0xf] = uVar6;
      puVar10[0x10] = uVar7;
      puVar10[0x11] = uVar8;
      puVar2 = (undefined4 *)(param_2 + 0x48 + (longlong)puVar10);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar10[0x12] = *puVar2;
      puVar10[0x13] = uVar6;
      puVar10[0x14] = uVar7;
      puVar10[0x15] = uVar8;
      puVar10 = puVar10 + 0x2c;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144fa1340 FUN_144fa1340 body=201 status=ok
// SIG undefined FUN_144fa1340(void)

void FUN_144fa1340(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar2 != *(longlong *)(param_2 + (longlong)plVar2)) {
        if (*(longlong *)(param_2 + (longlong)plVar2) != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)(param_2 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      lVar1 = *(longlong *)(param_2 + 8 + (longlong)plVar2);
      if (plVar2[1] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[1];
        plVar2[1] = *(longlong *)(param_2 + 8 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      lVar1 = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
      if (plVar2[2] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[2];
        plVar2[2] = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)plVar2);
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144fa1410 FUN_144fa1410 body=197 status=ok
// SIG undefined FUN_144fa1410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fa1410(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x74);
    lVar3 = (longlong)param_3;
    do {
      puVar1 = (undefined8 *)(puVar2 + -0x1d);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_144b3e890(puVar1);
        *puVar1 = hkgpMeshMergeAssemblyImpl::GeometryData::vftable;
        puVar2[-7] = 0;
        *(undefined8 *)(puVar2 + -5) = 0;
        *(undefined8 *)(puVar2 + -3) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        *(undefined8 *)(puVar2 + 1) = 0;
        puVar2[3] = 0;
        puVar2[4] = 0x80000000;
        puVar2[-0xf] = 0;
        puVar2[-0xe] = 0xffffffff;
        puVar2[-0xd] = 0x7fffffff;
        puVar2[-0xc] = 0x80000000;
        uVar6 = uRam000000014c6dae8c;
        uVar5 = uRam000000014c6dae88;
        uVar4 = uRam000000014c6dae84;
        puVar2[7] = _DAT_14c6dae80;
        puVar2[8] = uVar4;
        puVar2[9] = uVar5;
        puVar2[10] = uVar6;
        uVar4 = uRam000000014c6dae84 ^ 0x80000000;
        uVar5 = uRam000000014c6dae88 ^ 0x80000000;
        uVar6 = uRam000000014c6dae8c ^ 0x80000000;
        puVar2[0xb] = _DAT_14c6dae80 ^ 0x80000000;
        puVar2[0xc] = uVar4;
        puVar2[0xd] = uVar5;
        puVar2[0xe] = uVar6;
      }
      puVar2 = puVar2 + 0x2c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144fa1530 FUN_144fa1530 body=101 status=ok
// SIG undefined FUN_144fa1530(void)

undefined8 * FUN_144fa1530(undefined8 *param_1,ulonglong param_2)

{
  FUN_144fa8320(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 144fa15d0 FUN_144fa15d0 body=18 status=ok
// SIG undefined FUN_144fa15d0(void)

undefined8 * FUN_144fa15d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72a6b0;
  return param_2;
}



// FUNCTION 144fa15f0 FUN_144fa15f0 body=80 status=ok
// SIG undefined FUN_144fa15f0(void)

void FUN_144fa15f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa1640 FUN_144fa1640 body=63 status=ok
// SIG undefined FUN_144fa1640(void)

void FUN_144fa1640(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144fa1680 FUN_144fa1680 body=97 status=ok
// SIG undefined FUN_144fa1680(void)

void FUN_144fa1680(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa17a0 FUN_144fa17a0 body=80 status=ok
// SIG undefined FUN_144fa17a0(void)

void FUN_144fa17a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa17f0 FUN_144fa17f0 body=63 status=ok
// SIG undefined FUN_144fa17f0(void)

void FUN_144fa17f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144fa1860 FUN_144fa1860 body=97 status=ok
// SIG undefined FUN_144fa1860(void)

void FUN_144fa1860(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa18d0 FUN_144fa18d0 body=390 status=ok
// SIG undefined FUN_144fa18d0(void)

void FUN_144fa18d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 6;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 6);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa1a60 FUN_144fa1a60 body=95 status=ok
// SIG undefined FUN_144fa1a60(void)

void FUN_144fa1a60(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}


