//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TCV3TalkCore : NSObject
{
    struct Handle<std::__1::shared_ptr<talkcorev3::TalkCore>, std::__1::shared_ptr<talkcorev3::TalkCore>> _cppRefHandle;
}

+ (id)create:(id)arg1 delegate:(id)arg2 logger:(id)arg3 metricsReporter:(id)arg4 externalVideoService:(id)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reachabilityChanged:(_Bool)arg1;
- (void)injectNativeFrame:(long long)arg1;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (id)getPresenceService;
- (id)createCognacSession:(id)arg1 cognacId:(id)arg2;
- (id)createSession:(id)arg1 isGroup:(_Bool)arg2;
- (void)dispose;
- (id)initWithCpp:(const shared_ptr_6e98dd72 *)arg1;

@end

