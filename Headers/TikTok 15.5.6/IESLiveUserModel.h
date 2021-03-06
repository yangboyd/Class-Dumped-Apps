//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSLiveAnchorLevelModel, HTSLiveFollowIconModel, HTSLivePayGradeModel, HTSLiveUserAuthorStatsModel, HTSLiveUserCeremonyBorderModel, HTSLiveUserFansclubModel, HTSLivingRoomAttrs, IESLiveActivityAwardInfo, IESLiveImage, IESLiveUserAuthenticationInfo, IESLiveUserBrotherGroupModel, IESLiveUserExtraInfo, IESLiveUserFollowInfo, IESLiveUserMinorControlModel, IESLiveUserNobleInfo, IESLiveUserPOI, IESLiveUserXiguaInfo, NSArray, NSNumber, NSString;

@interface IESLiveUserModel : MTLModel <MTLJSONSerializing>
{
    _Bool _sinaVerified;
    _Bool _enableCommerceSale;
    _Bool _privateAccount;
    _Bool _isShowInquiryBall;
    _Bool _withSeriesEnable;
    NSNumber *_userID;
    NSNumber *_shortID;
    NSString *_displayID;
    NSString *_nickName;
    HTSLiveFollowIconModel *_followIcon;
    long long _gender;
    HTSLiveUserFansclubModel *_fansclub;
    IESLiveUserBrotherGroupModel *_brotherGroup;
    NSString *_city;
    NSString *_signature;
    NSNumber *_level;
    IESLiveImage *_avatarLarge;
    IESLiveImage *_avatarMedium;
    IESLiveImage *_avatarThumb;
    NSArray *_realTimeIconsNew;
    HTSLivingRoomAttrs *_livingRoomAttrs;
    HTSLivePayGradeModel *_payGrade;
    NSNumber *_ticketCount;
    IESLiveUserFollowInfo *_followInfo;
    NSArray *_topFans;
    long long _linkMicStats;
    NSNumber *_livingRoomID;
    NSString *_backgroundImageURL;
    NSNumber *_payScores;
    NSNumber *_totalRechargeDiamondCount;
    HTSLiveUserCeremonyBorderModel *_border;
    NSString *_specialID;
    IESLiveImage *_medal;
    HTSLiveAnchorLevelModel *_anchorLevel;
    NSArray *_badgeImageList;
    NSArray *_mediaBadgeImageList;
    NSArray *_roomIDs;
    HTSLiveUserAuthorStatsModel *_authorStats;
    NSString *_verifiedContent;
    NSString *_secUserID;
    IESLiveUserXiguaInfo *_xiguaInfo;
    IESLiveActivityAwardInfo *_activityReward;
    long long _userRole;
    IESLiveUserNobleInfo *_nobleInfo;
    IESLiveUserAuthenticationInfo *_authenticationInfo;
    IESLiveImage *_customedBackground;
    IESLiveUserPOI *_poiInfo;
    IESLiveUserMinorControlModel *_minorControl;
    long long _authStatus;
    long long _authStatusOpposite;
    IESLiveUserExtraInfo *_extraInfo;
}

+ (id)customedBackgroundJSONTransformer;
+ (id)authenticationInfoJSONTransformer;
+ (id)nobleInfoJSONTransformer;
+ (id)activityRewardJSONTransformer;
+ (id)xiguaInfoJSONTransformer;
+ (id)mediaBadgeImageListJSONTransformer;
+ (id)badgeImageListJSONTransformer;
+ (id)minorControlJSONTransformer;
+ (id)anchorLevelJSONTransformer;
+ (id)medalJSONTransformer;
+ (id)borderJSONTransformer;
+ (id)topFansJSONTransformer;
+ (id)followInfoJSONTransformer;
+ (id)brotherGroupJSONTransformer;
+ (id)payGradeJSONTransformer;
+ (id)livingRoomAttrsJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)realTimeIconsNewJSONTransformer;
+ (id)avatarThumbJSONTransformer;
+ (id)authorStatsJSONTransformer;
+ (id)fansclubJSONTransformer;
+ (id)avatarLargeJSONTransformer;
+ (id)genderJSONTransformer;
+ (id)linkMicStatsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)getDisplayNameWithNickName:(id)arg1 displayID:(id)arg2;
+ (id)live_liveUserFromAwemUser:(id)arg1;
@property(retain, nonatomic) IESLiveUserExtraInfo *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long authStatusOpposite; // @synthesize authStatusOpposite=_authStatusOpposite;
@property(nonatomic) long long authStatus; // @synthesize authStatus=_authStatus;
@property(nonatomic) _Bool withSeriesEnable; // @synthesize withSeriesEnable=_withSeriesEnable;
@property(readonly, nonatomic) IESLiveUserMinorControlModel *minorControl; // @synthesize minorControl=_minorControl;
@property(retain, nonatomic) IESLiveUserPOI *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) _Bool isShowInquiryBall; // @synthesize isShowInquiryBall=_isShowInquiryBall;
@property(retain, nonatomic) IESLiveImage *customedBackground; // @synthesize customedBackground=_customedBackground;
@property(nonatomic) _Bool privateAccount; // @synthesize privateAccount=_privateAccount;
@property(retain, nonatomic) IESLiveUserAuthenticationInfo *authenticationInfo; // @synthesize authenticationInfo=_authenticationInfo;
@property(retain, nonatomic) IESLiveUserNobleInfo *nobleInfo; // @synthesize nobleInfo=_nobleInfo;
@property(nonatomic) long long userRole; // @synthesize userRole=_userRole;
@property(retain, nonatomic) IESLiveActivityAwardInfo *activityReward; // @synthesize activityReward=_activityReward;
@property(retain, nonatomic) IESLiveUserXiguaInfo *xiguaInfo; // @synthesize xiguaInfo=_xiguaInfo;
@property(copy, nonatomic) NSString *secUserID; // @synthesize secUserID=_secUserID;
@property(copy, nonatomic) NSString *verifiedContent; // @synthesize verifiedContent=_verifiedContent;
@property(retain, nonatomic) HTSLiveUserAuthorStatsModel *authorStats; // @synthesize authorStats=_authorStats;
@property(retain, nonatomic) NSArray *roomIDs; // @synthesize roomIDs=_roomIDs;
@property(retain, nonatomic) NSArray *mediaBadgeImageList; // @synthesize mediaBadgeImageList=_mediaBadgeImageList;
@property(retain, nonatomic) NSArray *badgeImageList; // @synthesize badgeImageList=_badgeImageList;
@property(nonatomic) _Bool enableCommerceSale; // @synthesize enableCommerceSale=_enableCommerceSale;
@property(retain, nonatomic) HTSLiveAnchorLevelModel *anchorLevel; // @synthesize anchorLevel=_anchorLevel;
@property(retain, nonatomic) IESLiveImage *medal; // @synthesize medal=_medal;
@property(copy, nonatomic) NSString *specialID; // @synthesize specialID=_specialID;
@property(retain, nonatomic) HTSLiveUserCeremonyBorderModel *border; // @synthesize border=_border;
@property(retain, nonatomic) NSNumber *totalRechargeDiamondCount; // @synthesize totalRechargeDiamondCount=_totalRechargeDiamondCount;
@property(retain, nonatomic) NSNumber *payScores; // @synthesize payScores=_payScores;
@property(copy, nonatomic) NSString *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(retain, nonatomic) NSNumber *livingRoomID; // @synthesize livingRoomID=_livingRoomID;
@property(nonatomic) long long linkMicStats; // @synthesize linkMicStats=_linkMicStats;
@property(nonatomic) _Bool sinaVerified; // @synthesize sinaVerified=_sinaVerified;
@property(copy, nonatomic) NSArray *topFans; // @synthesize topFans=_topFans;
@property(retain, nonatomic) IESLiveUserFollowInfo *followInfo; // @synthesize followInfo=_followInfo;
@property(copy, nonatomic) NSNumber *ticketCount; // @synthesize ticketCount=_ticketCount;
@property(copy, nonatomic) HTSLivePayGradeModel *payGrade; // @synthesize payGrade=_payGrade;
@property(copy, nonatomic) HTSLivingRoomAttrs *livingRoomAttrs; // @synthesize livingRoomAttrs=_livingRoomAttrs;
@property(copy, nonatomic) NSArray *realTimeIconsNew; // @synthesize realTimeIconsNew=_realTimeIconsNew;
@property(copy, nonatomic) IESLiveImage *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(copy, nonatomic) IESLiveImage *avatarMedium; // @synthesize avatarMedium=_avatarMedium;
@property(copy, nonatomic) IESLiveImage *avatarLarge; // @synthesize avatarLarge=_avatarLarge;
@property(copy, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) IESLiveUserBrotherGroupModel *brotherGroup; // @synthesize brotherGroup=_brotherGroup;
@property(retain, nonatomic) HTSLiveUserFansclubModel *fansclub; // @synthesize fansclub=_fansclub;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(retain, nonatomic) HTSLiveFollowIconModel *followIcon; // @synthesize followIcon=_followIcon;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(copy, nonatomic) NSNumber *shortID; // @synthesize shortID=_shortID;
@property(copy, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)currentRoomID;
- (id)mapToPbUser;
- (_Bool)isEqual:(id)arg1;
- (id)poiInfoJSONTransformer;
- (id)dictionary;
- (_Bool)isRelationAuthorizedToOppositeClient;
- (_Bool)isContentAuthorizedToOppositeClient;
- (_Bool)isRelationAuthorizedToThisClient;
- (_Bool)isContentAuthorizedToThisClient;
- (id)getDisplayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

