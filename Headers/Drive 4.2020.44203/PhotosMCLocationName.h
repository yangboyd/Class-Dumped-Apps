//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface PhotosMCLocationName : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsAliasedLocation; // @dynamic hasIsAliasedLocation;
@property(nonatomic) _Bool hasIsFamiliarPlace; // @dynamic hasIsFamiliarPlace;
@property(nonatomic) _Bool hasLanguageCode; // @dynamic hasLanguageCode;
@property(nonatomic) _Bool hasLocationType; // @dynamic hasLocationType;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool isAliasedLocation; // @dynamic isAliasedLocation;
@property(nonatomic) _Bool isFamiliarPlace; // @dynamic isFamiliarPlace;
@property(copy, nonatomic) NSString *languageCode; // @dynamic languageCode;
@property(nonatomic) int locationType; // @dynamic locationType;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

