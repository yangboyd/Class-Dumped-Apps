//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGRTCCommonBatchedSessionRequest : NSObject
{
    unsigned long long _setupOptions;
    CDUnknownBlockType _requestParamsProvider;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    CDUnknownBlockType _loggingHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType loggingHandler; // @synthesize loggingHandler=_loggingHandler;
@property(readonly, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(readonly, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, nonatomic) CDUnknownBlockType requestParamsProvider; // @synthesize requestParamsProvider=_requestParamsProvider;
@property(readonly, nonatomic) unsigned long long setupOptions; // @synthesize setupOptions=_setupOptions;
- (id)initWithSetupOptions:(unsigned long long)arg1 requestParamsProvider:(CDUnknownBlockType)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4 loggingHandler:(CDUnknownBlockType)arg5;

@end

