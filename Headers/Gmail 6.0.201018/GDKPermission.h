//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface GDKPermission : NSObject
{
    _Bool _enablesDiscovery_16;
    _Bool _canRemove_9;
    _Bool _isStale_7;
    NSString *_identifier_10;
    long long _internalRole_12;
    long long _scope_5;
    NSString *_userID_6;
    NSString *_customerID_10;
    NSString *_name_4;
    NSString *_domain_6;
    NSString *_emailAddress_12;
    NSString *_avatarURLString_15;
    NSDate *_expirationDate_14;
    NSArray *_selectableRoles_15;
    NSString *_teamDriveID_11;
    NSArray *_canAddAsRoles_13;
    NSArray *_canChangeToRoles_16;
    NSString *_view_4;
    NSString *_inapplicableReason_18;
    NSArray *_permissionDetails_17;
    NSString *_staleReason_11;
    NSString *_ancestorToken_13;
}

+ (id)localizedStringForACLExpiringWithDate:(id)arg1;
+ (id)editButtonA11yLabelForLinkSharingType:(long long)arg1 isFolder:(_Bool)arg2 isTeamDriveItem:(_Bool)arg3;
+ (id)localizedLinkSharingTitleForSiteFileType:(_Bool)arg1 isPublishedLinkSharing:(_Bool)arg2;
+ (id)localizedLinkSharingStatusForPermission:(id)arg1 linkSharingType:(long long)arg2 isSiteFileType:(_Bool)arg3 isPublishedLinkSharing:(_Bool)arg4;
+ (id)defaultLocalizedLinkSharingStatusForPermission:(id)arg1 linkSharingType:(long long)arg2;
+ (id)localizedDraftLinkSharingStatusForPermission:(id)arg1 linkSharingType:(long long)arg2;
+ (id)localizedPublishedLinkSharingStatusForPermission:(id)arg1 linkSharingType:(long long)arg2;
+ (id)localizedLinkSharingTitleForLinkSharingOn:(_Bool)arg1 isDraftPermissionTurnedOff:(_Bool)arg2 isSiteFileType:(_Bool)arg3 isPublishedLinkSharing:(_Bool)arg4 isPublic:(_Bool)arg5;
+ (id)localizedA11yStringForRole:(long long)arg1 isFolder:(_Bool)arg2 isTeamDriveItem:(_Bool)arg3;
+ (id)publishedReaderStringForScope:(long long)arg1 organization:(id)arg2;
+ (id)draftWriterStringForScope:(long long)arg1 organization:(id)arg2 enablesDiscovery:(_Bool)arg3;
+ (id)defaultSitesStringForRole:(long long)arg1 isPublishedLinkSharing:(_Bool)arg2 isTeamDriveItem:(_Bool)arg3;
+ (id)localizedSubtitleForExpiration:(id)arg1;
+ (id)localizedStringForSiteRole:(long long)arg1 withScope:(long long)arg2 organization:(id)arg3 isPublishedLinkSharing:(_Bool)arg4 enablesDiscovery:(_Bool)arg5 isTeamDriveItem:(_Bool)arg6;
+ (id)localizedDescriptionForRole:(long long)arg1 isFolder:(_Bool)arg2 isTeamDriveItem:(_Bool)arg3 isLinkSharing:(_Bool)arg4;
+ (id)localizedStringForRole:(long long)arg1 isFolder:(_Bool)arg2 isTeamDriveItem:(_Bool)arg3 isLinkSharing:(_Bool)arg4;
+ (id)stringForRole:(long long)arg1;
+ (id)stringForScope:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ancestorToken; // @synthesize ancestorToken=_ancestorToken_13;
@property(readonly, copy, nonatomic) NSString *staleReason; // @synthesize staleReason=_staleReason_11;
@property(readonly, nonatomic) _Bool isStale; // @synthesize isStale=_isStale_7;
@property(readonly, copy, nonatomic) NSArray *permissionDetails; // @synthesize permissionDetails=_permissionDetails_17;
@property(readonly, copy, nonatomic) NSString *inapplicableReason; // @synthesize inapplicableReason=_inapplicableReason_18;
@property(readonly, copy, nonatomic) NSString *view; // @synthesize view=_view_4;
@property(readonly, copy, nonatomic) NSArray *canChangeToRoles; // @synthesize canChangeToRoles=_canChangeToRoles_16;
@property(readonly, copy, nonatomic) NSArray *canAddAsRoles; // @synthesize canAddAsRoles=_canAddAsRoles_13;
@property(readonly, copy, nonatomic) NSString *teamDriveID; // @synthesize teamDriveID=_teamDriveID_11;
@property(readonly, nonatomic) _Bool canRemove; // @synthesize canRemove=_canRemove_9;
@property(readonly, copy, nonatomic) NSArray *selectableRoles; // @synthesize selectableRoles=_selectableRoles_15;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate_14;
@property(readonly, copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString_15;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress_12;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain_6;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name_4;
@property(readonly, copy, nonatomic) NSString *customerID; // @synthesize customerID=_customerID_10;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID_6;
@property(readonly, nonatomic) _Bool enablesDiscovery; // @synthesize enablesDiscovery=_enablesDiscovery_16;
@property(readonly, nonatomic) long long scope; // @synthesize scope=_scope_5;
@property(readonly, nonatomic) long long internalRole; // @synthesize internalRole=_internalRole_12;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier_10;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) _Bool isLinkSharingPermission;
@property(readonly, nonatomic) long long role;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 scope:(long long)arg3 enablesDiscovery:(_Bool)arg4 userID:(id)arg5 customerID:(id)arg6 name:(id)arg7 domain:(id)arg8 emailAddress:(id)arg9 avatarURLString:(id)arg10 expirationDate:(id)arg11 selectableRoles:(id)arg12 canRemove:(_Bool)arg13 teamDriveID:(id)arg14 canAddAsRoles:(id)arg15 canChangeToRoles:(id)arg16 view:(id)arg17 inapplicableReason:(id)arg18 permissionDetails:(id)arg19 isStale:(_Bool)arg20 staleReason:(id)arg21 ancestorToken:(id)arg22;

@end

