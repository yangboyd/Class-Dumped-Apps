//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKPermission, NSDate;

@interface GDKRoleSelectorCVOParams : NSObject
{
    _Bool _isFolder_8;
    _Bool _isTeamDriveItem_15;
    _Bool _temakiEnabled_13;
    _Bool _initiallyChecked_16;
    _Bool _showsTopDivider_15;
    _Bool _showsBottomDivider_18;
    int _disabledReason_14;
    long long _role_4;
    GDKPermission *_permission_10;
    NSDate *_expirationDate_14;
}

@property(readonly, nonatomic) int disabledReason; // @synthesize disabledReason=_disabledReason_14;
@property(readonly, nonatomic) _Bool showsBottomDivider; // @synthesize showsBottomDivider=_showsBottomDivider_18;
@property(readonly, nonatomic) _Bool showsTopDivider; // @synthesize showsTopDivider=_showsTopDivider_15;
@property(readonly, nonatomic) _Bool initiallyChecked; // @synthesize initiallyChecked=_initiallyChecked_16;
@property(readonly, nonatomic) _Bool temakiEnabled; // @synthesize temakiEnabled=_temakiEnabled_13;
@property(readonly, nonatomic) _Bool isTeamDriveItem; // @synthesize isTeamDriveItem=_isTeamDriveItem_15;
@property(readonly, nonatomic) _Bool isFolder; // @synthesize isFolder=_isFolder_8;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate_14;
@property(readonly, nonatomic) GDKPermission *permission; // @synthesize permission=_permission_10;
@property(readonly, nonatomic) long long role; // @synthesize role=_role_4;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRole:(long long)arg1 permission:(id)arg2 expirationDate:(id)arg3 isFolder:(_Bool)arg4 isTeamDriveItem:(_Bool)arg5 temakiEnabled:(_Bool)arg6 initiallyChecked:(_Bool)arg7 showsTopDivider:(_Bool)arg8 showsBottomDivider:(_Bool)arg9 disabledReason:(int)arg10;

@end

