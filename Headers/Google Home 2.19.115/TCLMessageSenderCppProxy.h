//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TCLMessageSender-Protocol.h"

@interface TCLMessageSenderCppProxy : NSObject <TCLMessageSender>
{
    struct Handle<std::__1::shared_ptr<tacl::MessageSender>, std::__1::shared_ptr<tacl::MessageSender>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sendEncrypted:(id)arg1 recipients:(id)arg2 sender:(id)arg3 serverTimeToLiveUsec:(long long)arg4 routingCookie:(id)arg5 message:(id)arg6 context:(id)arg7;
- (id)sendMessage:(id)arg1 sender:(id)arg2 serverTimeToLiveUsec:(long long)arg3 routingCookie:(id)arg4 message:(id)arg5 context:(id)arg6;
- (id)initWithCpp:(const shared_ptr_87c945a9 *)arg1;

@end

