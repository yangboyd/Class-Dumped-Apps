//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGFeedItemLogger.h>

@class IGUser;

@interface IGProfileFeedItemLogger : IGFeedItemLogger
{
    IGUser *_profileUser;
    long long _profileTabType;
}

- (void).cxx_destruct;
- (id)additionalLoggingExtrasForMedia:(id)arg1;
- (id)initWithProfileUser:(id)arg1 profileTabType:(long long)arg2;

@end

