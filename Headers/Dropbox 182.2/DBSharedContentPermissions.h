//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DBSharedContentPermissions : NSObject
{
    NSArray *_sdkFolderPermissions;
    NSArray *_sdkInternalFolderPermissions;
    NSArray *_sdkFilePermissions;
    long long _permissionsSource;
}

- (void).cxx_destruct;
- (_Bool)db_actionAllowedForSDKFileAction:(id)arg1 deniedReason:(long long *)arg2;
- (_Bool)db_actionAllowedForSDKInternalFolderAction:(id)arg1 deniedReason:(long long *)arg2;
- (_Bool)db_actionAllowedForSDKFolderAction:(id)arg1 deniedReason:(long long *)arg2;
- (_Bool)canCreateEditorSharedLink;
- (_Bool)canCreateViewerSharedLink;
- (_Bool)inviteNewMembersAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)changeViewerInfoAllowed;
- (_Bool)leaveACopyAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)unmountAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)changeOptionsAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)disableViewerInfoAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)enableViewerInfoAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)unshareAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)relinquishMembershipAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)inviteViewerNoCommentAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)inviteViewerAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)inviteEditorAllowedWithDeniedReason:(long long *)arg1;
- (_Bool)editContentsAllowedWithDeniedReason:(long long *)arg1;
- (id)initWithSDKFilePermissions:(id)arg1;
- (id)initWithSDKInternalFolderPermissions:(id)arg1;
- (id)initWithSDKFolderPermissions:(id)arg1;

@end

