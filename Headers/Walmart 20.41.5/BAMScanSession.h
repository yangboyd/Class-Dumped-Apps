//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface BAMScanSession : NSObject
{
    _Bool _sendUpdateAfterImageAndResultCallsWereSuccessful;
    NSString *_requestReference;
    NSError *_lastError;
}

+ (id)currentScanSession;
@property(nonatomic) _Bool sendUpdateAfterImageAndResultCallsWereSuccessful; // @synthesize sendUpdateAfterImageAndResultCallsWereSuccessful=_sendUpdateAfterImageAndResultCallsWereSuccessful;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSString *requestReference; // @synthesize requestReference=_requestReference;
- (void).cxx_destruct;
- (_Bool)hasValidRequestReference;
- (void)prepareForNewScanAttempt;
- (void)destroySession;
- (void)createNewSession;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

