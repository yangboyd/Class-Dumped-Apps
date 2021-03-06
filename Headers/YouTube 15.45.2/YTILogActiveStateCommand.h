//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTELMCommandHandler-Protocol.h>

@class NSData, NSString, YTILoggingDirectives;

@interface YTILogActiveStateCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
- (int)postImpressionEventType;
- (void)logPostImpressionEventWithContext:(id)arg1;
- (void)logActiveStateEventWithContext:(id)arg1 sender:(id)arg2;
- (void)executeWithCommandContext:(id)arg1 gimme:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic) int activeStateType; // @dynamic activeStateType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasActiveStateType; // @dynamic hasActiveStateType;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUsePostImpressionEventLogging; // @dynamic hasUsePostImpressionEventLogging;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool usePostImpressionEventLogging; // @dynamic usePostImpressionEventLogging;

@end

