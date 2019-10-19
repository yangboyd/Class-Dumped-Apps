//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SPTDataLoaderServerTrustPolicy : NSObject
{
    NSDictionary *_trustedHostsAndCertificates;
}

+ (id)policyWithHostsAndCertificatePaths:(id)arg1;
@property(retain, nonatomic) NSDictionary *trustedHostsAndCertificates; // @synthesize trustedHostsAndCertificates=_trustedHostsAndCertificates;
- (void).cxx_destruct;
- (id)initWithHostsAndCertificatePaths:(id)arg1;
- (_Bool)validateWithTrust:(struct __SecTrust *)arg1 host:(id)arg2;
- (id)certificatesForHost:(id)arg1;
- (_Bool)validateChallenge:(id)arg1;

@end

