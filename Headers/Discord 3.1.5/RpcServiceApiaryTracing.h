//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RpcServiceApiaryTracing : NSObject
{
    long long apiaryTraceEmailsSent_;
    NSString *apiaryTraceRecipient_;
    NSString *apiaryTraceMethodNameSubstring_;
    long long apiaryTraceMaxEmails_;
    NSDictionary *apiaryTraceParameters_;
}

- (void).cxx_destruct;
- (_Bool)shouldTraceRpc:(id)arg1;
- (void)transformRpcForTracing:(id)arg1;
- (void)updateApiaryTraceSettingsWithRecipient:(id)arg1 methodNameSubstring:(id)arg2 maxEmails:(long long)arg3;

@end

