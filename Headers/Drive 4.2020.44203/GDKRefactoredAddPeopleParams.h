//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GDKFile;

@interface GDKRefactoredAddPeopleParams : NSObject
{
    _Bool _blocosWarningsEnabled_21;
    _Bool _showAdvancedPermissions_23;
    _Bool _useDetailedConfirmationMessage_30;
    _Bool _addPermissionsOnSend_20;
    _Bool _overflowEnabled_15;
    _Bool _updateNativeSupportEnabled_26;
    _Bool _handleResourceKeys_18;
    id <GDKFile> _file_4;
    NSString *_title_5;
    NSString *_peopleTitleText_15;
    NSString *_peopleDescriptionText_21;
    long long _roleSelectorType_16;
    long long _roleForAddedPeople_18;
    NSString *_whoHasAccessTitle_17;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool handleResourceKeys; // @synthesize handleResourceKeys=_handleResourceKeys_18;
@property(readonly, nonatomic) _Bool updateNativeSupportEnabled; // @synthesize updateNativeSupportEnabled=_updateNativeSupportEnabled_26;
@property(readonly, nonatomic) _Bool overflowEnabled; // @synthesize overflowEnabled=_overflowEnabled_15;
@property(readonly, nonatomic) _Bool addPermissionsOnSend; // @synthesize addPermissionsOnSend=_addPermissionsOnSend_20;
@property(readonly, copy, nonatomic) NSString *whoHasAccessTitle; // @synthesize whoHasAccessTitle=_whoHasAccessTitle_17;
@property(readonly, nonatomic) _Bool useDetailedConfirmationMessage; // @synthesize useDetailedConfirmationMessage=_useDetailedConfirmationMessage_30;
@property(readonly, nonatomic) long long roleForAddedPeople; // @synthesize roleForAddedPeople=_roleForAddedPeople_18;
@property(readonly, nonatomic) _Bool showAdvancedPermissions; // @synthesize showAdvancedPermissions=_showAdvancedPermissions_23;
@property(readonly, nonatomic) long long roleSelectorType; // @synthesize roleSelectorType=_roleSelectorType_16;
@property(readonly, copy, nonatomic) NSString *peopleDescriptionText; // @synthesize peopleDescriptionText=_peopleDescriptionText_21;
@property(readonly, copy, nonatomic) NSString *peopleTitleText; // @synthesize peopleTitleText=_peopleTitleText_15;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title_5;
@property(readonly, nonatomic) id <GDKFile> file; // @synthesize file=_file_4;
@property(readonly, nonatomic) _Bool blocosWarningsEnabled; // @synthesize blocosWarningsEnabled=_blocosWarningsEnabled_21;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBlocosWarningsEnabled:(_Bool)arg1 file:(id)arg2 title:(id)arg3 peopleTitleText:(id)arg4 peopleDescriptionText:(id)arg5 roleSelectorType:(long long)arg6 showAdvancedPermissions:(_Bool)arg7 roleForAddedPeople:(long long)arg8 useDetailedConfirmationMessage:(_Bool)arg9 whoHasAccessTitle:(id)arg10 addPermissionsOnSend:(_Bool)arg11 overflowEnabled:(_Bool)arg12 updateNativeSupportEnabled:(_Bool)arg13 handleResourceKeys:(_Bool)arg14;

@end

