//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PhotosMCReadActorsByIdResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clusterArray; // @dynamic clusterArray;
@property(readonly, nonatomic) unsigned long long clusterArray_Count; // @dynamic clusterArray_Count;
@property(retain, nonatomic) NSMutableArray *failureArray; // @dynamic failureArray;
@property(readonly, nonatomic) unsigned long long failureArray_Count; // @dynamic failureArray_Count;
@property(nonatomic) _Bool hasResumeToken; // @dynamic hasResumeToken;
@property(retain, nonatomic) NSMutableArray *resultArray; // @dynamic resultArray;
@property(readonly, nonatomic) unsigned long long resultArray_Count; // @dynamic resultArray_Count;
@property(copy, nonatomic) NSString *resumeToken; // @dynamic resumeToken;

@end

