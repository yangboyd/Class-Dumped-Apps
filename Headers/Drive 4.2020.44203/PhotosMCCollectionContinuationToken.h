//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCCollectionId;

@interface PhotosMCCollectionContinuationToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasResumeToken; // @dynamic hasResumeToken;
@property(retain, nonatomic) PhotosMCCollectionId *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *resumeToken; // @dynamic resumeToken;

@end

