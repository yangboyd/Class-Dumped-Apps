//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@protocol IGAnalyticsEventObserver <NSObject>
- (void)analytics:(id <IGAnalyticsEventLoggingProtocol>)arg1 willLogEvent:(NSString *)arg2 module:(NSString *)arg3 extra:(NSDictionary *)arg4 time:(double)arg5 channel:(int)arg6;
@end

