//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MessageSet, NSMutableArray, OrchFormHeader, OrchImageWithCaption;

@interface OrchAccountSelector : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *accountOptionArray; // @dynamic accountOptionArray;
@property(readonly, nonatomic) unsigned long long accountOptionArray_Count; // @dynamic accountOptionArray_Count;
@property(retain, nonatomic) OrchImageWithCaption *brandIcon; // @dynamic brandIcon;
@property(nonatomic) _Bool displayForSingleAccount; // @dynamic displayForSingleAccount;
@property(retain, nonatomic) OrchFormHeader *formHeader; // @dynamic formHeader;
@property(nonatomic) _Bool hasBrandIcon; // @dynamic hasBrandIcon;
@property(nonatomic) _Bool hasDisplayForSingleAccount; // @dynamic hasDisplayForSingleAccount;
@property(nonatomic) _Bool hasFormHeader; // @dynamic hasFormHeader;
@property(nonatomic) _Bool hasHideWhenCollapsed; // @dynamic hasHideWhenCollapsed;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasPrivateExtensions; // @dynamic hasPrivateExtensions;
@property(nonatomic) _Bool hideWhenCollapsed; // @dynamic hideWhenCollapsed;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(retain, nonatomic) MessageSet *privateExtensions; // @dynamic privateExtensions;

@end

