//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SGACAutocompleteExtension_LookupInfo;

@interface SGACAutocompleteExtension_ApiCall : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItemCount; // @dynamic hasItemCount;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasLookupInfo; // @dynamic hasLookupInfo;
@property(nonatomic) int itemCount; // @dynamic itemCount;
@property(nonatomic) int label; // @dynamic label;
@property(retain, nonatomic) SGACAutocompleteExtension_LookupInfo *lookupInfo; // @dynamic lookupInfo;

@end

