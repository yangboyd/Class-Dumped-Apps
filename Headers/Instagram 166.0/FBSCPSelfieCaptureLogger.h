//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/FBSCPEventLogger.h>

#import <InstagramAppCoreFramework/SCPSelfieCaptureLogging-Protocol.h>

@class NSDictionary, NSMutableArray, NSNumberFormatter, NSString;

@interface FBSCPSelfieCaptureLogger : FBSCPEventLogger <SCPSelfieCaptureLogging>
{
    NSString *_product;
    NSString *_sessionId;
    NSDictionary *_tags;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (void)addCaptureSessionState:(id)arg1;
- (void)logFlowStateChangeFrom:(id)arg1 to:(id)arg2;
- (id)initWithProduct:(id)arg1 sessionId:(id)arg2 tags:(id)arg3;
- (id)flowTypeName;
- (id)tags;
- (id)sessionId;
- (id)productName;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *currentCaptureSession;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

