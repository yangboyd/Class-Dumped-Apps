//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageFeedImpression1 : SPTLogMessage
{
    NSString *_sessionIdValue;
    NSString *_userIntentValue;
    NSString *_sourcePageIdValue;
}

+ (id)messageWithSessionId:(id)arg1 userIntent:(id)arg2 sourcePageId:(id)arg3;
@property(copy, nonatomic) NSString *sourcePageIdValue; // @synthesize sourcePageIdValue=_sourcePageIdValue;
@property(copy, nonatomic) NSString *userIntentValue; // @synthesize userIntentValue=_userIntentValue;
@property(copy, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

