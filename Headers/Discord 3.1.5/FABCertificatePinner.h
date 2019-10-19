//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FABCertificatePinner : NSObject
{
    NSArray *_certificates;
}

+ (struct __SecCertificate *)createCertificationWithData:(const void *)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (_Bool)handleChallenge:(id)arg1 fromURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (short)evaluateTrust:(struct __SecTrust *)arg1 result:(unsigned int *)arg2;
- (id)initWithCertificates:(id)arg1;

@end

