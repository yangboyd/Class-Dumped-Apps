//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class NSString;

@interface GMSx_GMMLevel : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLevelName; // @dynamic hasLevelName;
@property(nonatomic) _Bool hasLevelNameAbbreviation; // @dynamic hasLevelNameAbbreviation;
@property(nonatomic) _Bool hasOrdinal; // @dynamic hasOrdinal;
@property(nonatomic) _Bool hasStreetviewLevelId; // @dynamic hasStreetviewLevelId;
@property(copy, nonatomic) NSString *levelName; // @dynamic levelName;
@property(copy, nonatomic) NSString *levelNameAbbreviation; // @dynamic levelNameAbbreviation;
@property(nonatomic) float ordinal; // @dynamic ordinal;
@property(nonatomic) unsigned long long streetviewLevelId; // @dynamic streetviewLevelId;

@end

