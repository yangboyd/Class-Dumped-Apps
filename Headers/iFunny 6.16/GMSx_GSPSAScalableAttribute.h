//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GSPSAIconContainer, GMSx_GSPSAValue, NSString;

@interface GMSx_GSPSAScalableAttribute : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int displayStyle; // @dynamic displayStyle;
@property(nonatomic) _Bool hasDisplayStyle; // @dynamic hasDisplayStyle;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIsContextRelevant; // @dynamic hasIsContextRelevant;
@property(nonatomic) _Bool hasLocalizedDisplayName; // @dynamic hasLocalizedDisplayName;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) GMSx_GSPSAIconContainer *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isContextRelevant; // @dynamic isContextRelevant;
@property(copy, nonatomic) NSString *localizedDisplayName; // @dynamic localizedDisplayName;
@property(retain, nonatomic) GMSx_GSPSAValue *value; // @dynamic value;

@end

