//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/CHMEventService-Protocol.h>

@class CHMRenderContextLog, NSString;
@protocol CHMClearcutLoggerProvider;

@interface CHMClearcutService : NSObject <CHMEventService>
{
    NSString *_chimeClientID;
    id <CHMClearcutLoggerProvider> _loggerProvider;
    CHMRenderContextLog *_renderContextLog;
}

+ (int)convertNotificationFailureToProtoEnum:(long long)arg1;
+ (int)convertUserInteractionToProtoEnum:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CHMRenderContextLog *renderContextLog; // @synthesize renderContextLog=_renderContextLog;
@property(retain, nonatomic) id <CHMClearcutLoggerProvider> loggerProvider; // @synthesize loggerProvider=_loggerProvider;
@property(readonly, nonatomic) NSString *chimeClientID; // @synthesize chimeClientID=_chimeClientID;
- (id)frontEndLogFromLogEvent:(id)arg1;
- (id)keyForAccountTargetsWithClientID:(id)arg1;
- (id)targetForAccount:(id)arg1 clientID:(id)arg2;
- (void)cacheAccountTargets:(id)arg1 clientID:(id)arg2;
- (void)logFailure:(long long)arg1 threadIdentifier:(id)arg2 version:(long long)arg3 creationID:(long long)arg4 account:(id)arg5;
- (void)logFailureEvent:(id)arg1;
- (void)logInteraction:(long long)arg1 threadIdentifier:(id)arg2 version:(long long)arg3 creationID:(long long)arg4 target:(id)arg5 account:(id)arg6;
- (void)logInteractionEvent:(id)arg1;
- (id)initWithChimeClientID:(id)arg1 loggerProvider:(id)arg2;
- (id)initWithChimeClientID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

