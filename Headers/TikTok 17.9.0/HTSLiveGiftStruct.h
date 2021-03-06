//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt64Dictionary, HTSLiveGiftPanelOperation, HTSLiveGiftStruct_GiftStructFansClubInfo, HTSLiveImage, NSMutableArray, NSString;

@interface HTSLiveGiftStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int actionType; // @dynamic actionType;
@property(nonatomic) long long appId; // @dynamic appId;
@property(copy, nonatomic) NSString *businessText; // @dynamic businessText;
@property(nonatomic) _Bool cnyGift; // @dynamic cnyGift;
@property(nonatomic) _Bool combo; // @dynamic combo;
@property(copy, nonatomic) NSString *describe; // @dynamic describe;
@property(nonatomic) int diamondCount; // @dynamic diamondCount;
@property(nonatomic) _Bool doodle; // @dynamic doodle;
@property(nonatomic) long long duration; // @dynamic duration;
@property(copy, nonatomic) NSString *eventName; // @dynamic eventName;
@property(retain, nonatomic) HTSLiveGiftStruct_GiftStructFansClubInfo *fansclubInfo; // @dynamic fansclubInfo;
@property(nonatomic) _Bool forCustom; // @dynamic forCustom;
@property(nonatomic) _Bool forFansclub; // @dynamic forFansclub;
@property(nonatomic) _Bool forLinkmic; // @dynamic forLinkmic;
@property(nonatomic) _Bool forPortal; // @dynamic forPortal;
@property(retain, nonatomic) HTSLiveImage *giftLabelIcon; // @dynamic giftLabelIcon;
@property(retain, nonatomic) HTSLiveGiftPanelOperation *giftOperation; // @dynamic giftOperation;
@property(nonatomic) long long giftScene; // @dynamic giftScene;
@property(copy, nonatomic) NSString *goldEffect; // @dynamic goldEffect;
@property(nonatomic) long long goldenBeans; // @dynamic goldenBeans;
@property(copy, nonatomic) NSString *graySchemeURL; // @dynamic graySchemeURL;
@property(copy, nonatomic) NSString *guideURL; // @dynamic guideURL;
@property(nonatomic) _Bool hasFansclubInfo; // @dynamic hasFansclubInfo;
@property(nonatomic) _Bool hasGiftLabelIcon; // @dynamic hasGiftLabelIcon;
@property(nonatomic) _Bool hasGiftOperation; // @dynamic hasGiftOperation;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) long long honorLevel; // @dynamic honorLevel;
@property(retain, nonatomic) HTSLiveImage *icon; // @dynamic icon;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(retain, nonatomic) HTSLiveImage *image; // @dynamic image;
@property(nonatomic) _Bool isDisplayedOnPanel; // @dynamic isDisplayedOnPanel;
@property(nonatomic) _Bool isGray; // @dynamic isGray;
@property(nonatomic) int itemType; // @dynamic itemType;
@property(copy, nonatomic) NSString *manual; // @dynamic manual;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long nobleLevel; // @dynamic nobleLevel;
@property(nonatomic) _Bool notify; // @dynamic notify;
@property(nonatomic) long long primaryEffectId; // @dynamic primaryEffectId;
@property(nonatomic) _Bool punishMedicine; // @dynamic punishMedicine;
@property(copy, nonatomic) NSString *region; // @dynamic region;
@property(copy, nonatomic) NSString *schemeURL; // @dynamic schemeURL;
@property(retain, nonatomic) GPBStringInt64Dictionary *specialEffects; // @dynamic specialEffects;
@property(readonly, nonatomic) unsigned long long specialEffects_Count; // @dynamic specialEffects_Count;
@property(retain, nonatomic) NSMutableArray *subsArray; // @dynamic subsArray;
@property(readonly, nonatomic) unsigned long long subsArray_Count; // @dynamic subsArray_Count;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) long long vipLevel; // @dynamic vipLevel;
@property(nonatomic) int watermelonSeeds; // @dynamic watermelonSeeds;

@end

