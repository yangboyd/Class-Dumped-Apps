//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCaribouSmartmailStatusState, JCSTime, NSString;

@protocol ComGoogleCaribouSmartmailBadgeOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSTime *)getExpirationTime;
- (_Bool)hasExpirationTime;
- (JCSTime *)getStartTime;
- (_Bool)hasStartTime;
- (ComGoogleCaribouSmartmailStatusState *)getStatus;
- (_Bool)hasStatus;
- (NSString *)getText;
- (_Bool)hasText;
@end

