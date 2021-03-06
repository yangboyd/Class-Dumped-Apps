//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP5Slack30objc_SLKAsyncAvatarDisplayable_-Protocol.h"

@class NSString, SLKAccount, UIColor, UIImage;
@protocol _TtP13SlackCoreData26SLKPresenceServerInterface_, _TtP5Slack26SLKDNDInfoManagerInterface_, _TtP5Slack26SLKUserLazyLoaderInterface_;

@interface SLKInviteeViewModel : NSObject <_TtP5Slack30objc_SLKAsyncAvatarDisplayable_>
{
    _Bool _displaysFullName;
    _Bool _isMe;
    _Bool _isActive;
    _Bool _isAppUser;
    _Bool _isDeactivated;
    _Bool _isDisabled;
    NSString *_tsid;
    NSString *_displayName;
    UIImage *_displayImage;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_preferredName;
    NSString *_userName;
    NSString *_detailInfo;
    NSString *_avatarURLString;
    long long _userType;
    NSString *_teamId;
    NSString *_enterpriseId;
    NSString *_statusIconLabel;
    NSString *_statusIcon;
    UIColor *_statusColor;
    UIColor *_tintColor;
    long long _contactType;
    NSString *_companyName;
    id _modelObject;
    id <_TtP13SlackCoreData26SLKPresenceServerInterface_> _presenceServer;
    id <_TtP5Slack26SLKDNDInfoManagerInterface_> _dndInfoManager;
    UIImage *_accessoryImage;
    id <_TtP5Slack26SLKUserLazyLoaderInterface_> _userLazyLoader;
    SLKAccount *_currentAccount;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) SLKAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(nonatomic) __weak id <_TtP5Slack26SLKUserLazyLoaderInterface_> userLazyLoader; // @synthesize userLazyLoader=_userLazyLoader;
@property(retain, nonatomic) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(retain, nonatomic) id <_TtP5Slack26SLKDNDInfoManagerInterface_> dndInfoManager; // @synthesize dndInfoManager=_dndInfoManager;
@property(retain, nonatomic) id <_TtP13SlackCoreData26SLKPresenceServerInterface_> presenceServer; // @synthesize presenceServer=_presenceServer;
@property(retain, nonatomic) id modelObject; // @synthesize modelObject=_modelObject;
@property(readonly, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(readonly, nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(readonly, nonatomic) _Bool isDeactivated; // @synthesize isDeactivated=_isDeactivated;
@property(readonly, nonatomic) _Bool isAppUser; // @synthesize isAppUser=_isAppUser;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(readonly, nonatomic) NSString *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(readonly, nonatomic) NSString *statusIconLabel; // @synthesize statusIconLabel=_statusIconLabel;
@property(readonly, nonatomic) _Bool displaysFullName; // @synthesize displaysFullName=_displaysFullName;
@property(readonly, nonatomic) NSString *enterpriseId; // @synthesize enterpriseId=_enterpriseId;
@property(readonly, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(readonly, nonatomic) long long userType; // @synthesize userType=_userType;
@property(readonly, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(readonly, nonatomic) NSString *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) NSString *preferredName; // @synthesize preferredName=_preferredName;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSString *tsid; // @synthesize tsid=_tsid;
- (id)asRecipient;
- (void)avatarImageForInvitee:(CDUnknownBlockType)arg1;
- (void)avatarViewModelWithSize:(long long)arg1 dependencies:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *operationId;
- (id)imagePropertyFromData:(id)arg1;
- (void)reloadStatusWithPresenceServer:(id)arg1;
@property(readonly, nonatomic) NSString *accessibilityLabel;
- (id)displayNameOrMe;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
- (id)initWithGoogleContact:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithContact:(id)arg1 shouldIncludePhone:(_Bool)arg2;
- (id)initWithUser:(id)arg1 isCurrentUser:(_Bool)arg2 userLazyLoader:(id)arg3 presenceServer:(id)arg4 dndInfoManager:(id)arg5 preferencesManager:(id)arg6 currentAccount:(id)arg7;
- (id)initWithUser:(id)arg1 userLazyLoader:(id)arg2 presenceServer:(id)arg3 dndInfoManager:(id)arg4 preferencesManager:(id)arg5 currentAccount:(id)arg6;
@property(nonatomic, readonly) NSString *id;

@end

