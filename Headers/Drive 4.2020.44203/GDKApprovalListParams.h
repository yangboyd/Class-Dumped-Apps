//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKFileIDResourceKeyPair, GDKTheme, NSString;
@protocol SSOIdentity;

@interface GDKApprovalListParams : NSObject
{
    _Bool _canRequestApproval_18;
    _Bool _commenterRoleInMyDriveFoldersEnabled_36;
    int _openContext_11;
    GDKFileIDResourceKeyPair *_fileIDResourceKeyPair_21;
    id <SSOIdentity> _currentUserIdentity_19;
    GDKTheme *_theme_5;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme_5;
@property(readonly, nonatomic) int openContext; // @synthesize openContext=_openContext_11;
@property(readonly, nonatomic) _Bool commenterRoleInMyDriveFoldersEnabled; // @synthesize commenterRoleInMyDriveFoldersEnabled=_commenterRoleInMyDriveFoldersEnabled_36;
@property(readonly, nonatomic) _Bool canRequestApproval; // @synthesize canRequestApproval=_canRequestApproval_18;
@property(readonly, nonatomic) id <SSOIdentity> currentUserIdentity; // @synthesize currentUserIdentity=_currentUserIdentity_19;
@property(readonly, nonatomic) GDKFileIDResourceKeyPair *fileIDResourceKeyPair; // @synthesize fileIDResourceKeyPair=_fileIDResourceKeyPair_21;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSString *itemID;
- (id)initWithFileIDResourceKeyPair:(id)arg1 currentUserIdentity:(id)arg2 canRequestApproval:(_Bool)arg3 commenterRoleInMyDriveFoldersEnabled:(_Bool)arg4 openContext:(int)arg5 theme:(id)arg6;

@end

