//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMHaTSSurvey, ASMHelpInfo, NSMutableArray, NSString;

@interface ASMMenuAlternative : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHatsSurvey; // @dynamic hasHatsSurvey;
@property(nonatomic) _Bool hasHelpInfo; // @dynamic hasHelpInfo;
@property(nonatomic) _Bool hasShowLogo; // @dynamic hasShowLogo;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(retain, nonatomic) ASMHaTSSurvey *hatsSurvey; // @dynamic hatsSurvey;
@property(retain, nonatomic) ASMHelpInfo *helpInfo; // @dynamic helpInfo;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @dynamic sectionsArray;
@property(readonly, nonatomic) unsigned long long sectionsArray_Count; // @dynamic sectionsArray_Count;
@property(nonatomic) _Bool showLogo; // @dynamic showLogo;
@property(copy, nonatomic) NSString *titleText; // @dynamic titleText;

@end

