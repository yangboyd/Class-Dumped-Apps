//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AppIcon, Button, DismissReasonCollection, NSString, PromotionReasonCollection;

@interface SecurityAdvisorPromotion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Button *button; // @dynamic button;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(retain, nonatomic) DismissReasonCollection *dismissReasons; // @dynamic dismissReasons;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDismissReasons; // @dynamic hasDismissReasons;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasPromotionReasons; // @dynamic hasPromotionReasons;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) AppIcon *icon; // @dynamic icon;
@property(retain, nonatomic) PromotionReasonCollection *promotionReasons; // @dynamic promotionReasons;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

