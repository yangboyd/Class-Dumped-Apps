//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRGrowthService_AndroidIntentTarget, GTLRGrowthService_ApplicationIdentifier, GTLRGrowthService_Color, NSArray, NSString;

@interface GTLRGrowthService_Action : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *actionType; // @dynamic actionType;
@property(copy, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(retain, nonatomic) GTLRGrowthService_AndroidIntentTarget *intentTarget; // @dynamic intentTarget;
@property(retain, nonatomic) GTLRGrowthService_ApplicationIdentifier *promotedApp; // @dynamic promotedApp;
@property(copy, nonatomic) NSString *promotionCode; // @dynamic promotionCode;
@property(copy, nonatomic) NSString *style; // @dynamic style;
@property(retain, nonatomic) NSArray *stylingScheme; // @dynamic stylingScheme;
@property(retain, nonatomic) GTLRGrowthService_Color *textColor; // @dynamic textColor;
@property(retain, nonatomic) GTLRGrowthService_Color *touchFeedbackColor; // @dynamic touchFeedbackColor;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end

