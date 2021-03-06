//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WASignalFingerprint : NSObject
{
    struct fingerprint *_fingerprint;
    struct signal_context *_signal_global_context;
    NSData *_fingerprintData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *fingerprintData; // @synthesize fingerprintData=_fingerprintData;
- (long long)validateAgainstRemoteFingerprintData:(id)arg1;
- (long long)validateLocalFingerprint:(struct scannable_fingerprint *)arg1 againstRemoteFingerprint:(struct scannable_fingerprint *)arg2 validationResult:(long long *)arg3;
@property(readonly, nonatomic) NSString *verificationCode;
- (void)dealloc;
- (id)initWithSignalProtocolFingerprint:(struct fingerprint *)arg1 serializedFingerprintData:(id)arg2 globalContext:(struct signal_context *)arg3;

@end

