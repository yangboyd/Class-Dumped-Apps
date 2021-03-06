//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEVCDAlertModel, AWEVCDUserModel;

@interface AWEVCDAccountAlertModel : AWEBaseApiModel
{
    long long _accountAlertType;
    AWEVCDAlertModel *_authorizeAlert;
    AWEVCDAlertModel *_closeInterActionAlert;
    AWEVCDAlertModel *_importFansAlert;
    AWEVCDAlertModel *_finishInterActionAlert;
    AWEVCDUserModel *_vcdUserInfo;
    AWEVCDAlertModel *_relationAlert;
}

+ (id)vcdUserInfoJSONTransformer;
+ (id)finishInterActionAlertJSONTransformer;
+ (id)importFansAlertJSONTransformer;
+ (id)closeInterActionAlertJSONTransformer;
+ (id)relationAlertJSONTransformer;
+ (id)authorizeAlertJSONTransformer;
+ (id)accountAlertTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEVCDAlertModel *relationAlert; // @synthesize relationAlert=_relationAlert;
@property(retain, nonatomic) AWEVCDUserModel *vcdUserInfo; // @synthesize vcdUserInfo=_vcdUserInfo;
@property(retain, nonatomic) AWEVCDAlertModel *finishInterActionAlert; // @synthesize finishInterActionAlert=_finishInterActionAlert;
@property(retain, nonatomic) AWEVCDAlertModel *importFansAlert; // @synthesize importFansAlert=_importFansAlert;
@property(retain, nonatomic) AWEVCDAlertModel *closeInterActionAlert; // @synthesize closeInterActionAlert=_closeInterActionAlert;
@property(retain, nonatomic) AWEVCDAlertModel *authorizeAlert; // @synthesize authorizeAlert=_authorizeAlert;
@property(nonatomic) long long accountAlertType; // @synthesize accountAlertType=_accountAlertType;
- (void).cxx_destruct;

@end

