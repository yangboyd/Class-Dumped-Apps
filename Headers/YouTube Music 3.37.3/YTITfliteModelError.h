//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTITfliteModelError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorType; // @dynamic errorType;
@property(nonatomic) _Bool hasErrorType; // @dynamic hasErrorType;
@property(nonatomic) _Bool hasModelFilename; // @dynamic hasModelFilename;
@property(nonatomic) _Bool hasModelType; // @dynamic hasModelType;
@property(nonatomic) _Bool hasTensorName; // @dynamic hasTensorName;
@property(copy, nonatomic) NSString *modelFilename; // @dynamic modelFilename;
@property(nonatomic) int modelType; // @dynamic modelType;
@property(copy, nonatomic) NSString *tensorName; // @dynamic tensorName;

@end

