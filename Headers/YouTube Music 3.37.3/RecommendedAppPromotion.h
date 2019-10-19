//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AndroidOnboardPromotion, EmailPromotion, NSString, NativeNotificationPromotion, SecurityAdvisorPromotion;

@interface RecommendedAppPromotion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AndroidOnboardPromotion *androidOnboardPromotion; // @dynamic androidOnboardPromotion;
@property(copy, nonatomic) NSString *appName; // @dynamic appName;
@property(copy, nonatomic) NSString *appPromotionId; // @dynamic appPromotionId;
@property(retain, nonatomic) EmailPromotion *emailPromotion; // @dynamic emailPromotion;
@property(nonatomic) _Bool hasAppName; // @dynamic hasAppName;
@property(nonatomic) _Bool hasAppPromotionId; // @dynamic hasAppPromotionId;
@property(nonatomic) _Bool hasPromotionName; // @dynamic hasPromotionName;
@property(retain, nonatomic) NativeNotificationPromotion *nativeNotificationPromotion; // @dynamic nativeNotificationPromotion;
@property(copy, nonatomic) NSString *promotionName; // @dynamic promotionName;
@property(readonly, nonatomic) int promotionOneOfCase; // @dynamic promotionOneOfCase;
@property(retain, nonatomic) SecurityAdvisorPromotion *securityAdvisorPromotion; // @dynamic securityAdvisorPromotion;

@end

