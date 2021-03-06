//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JWT : NSObject
{
}

+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withError:(id *)arg3;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withError:(id *)arg3 withForcedAlgorithmByName:(id)arg4 skipVerification:(_Bool)arg5 whitelist:(id)arg6;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withError:(id *)arg3 withForcedAlgorithmByName:(id)arg4 skipVerification:(_Bool)arg5;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withError:(id *)arg3 withForcedAlgorithmByName:(id)arg4;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withError:(id *)arg3 withForcedOption:(_Bool)arg4;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withTrustedClaimsSet:(id)arg3 withError:(id *)arg4 withForcedAlgorithmByName:(id)arg5 withForcedOption:(_Bool)arg6 withAlgorithmWhiteList:(id)arg7;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withTrustedClaimsSet:(id)arg3 withError:(id *)arg4 withForcedAlgorithmByName:(id)arg5 withForcedOption:(_Bool)arg6;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withTrustedClaimsSet:(id)arg3 withError:(id *)arg4 withForcedOption:(_Bool)arg5;
+ (id)decodeMessage:(id)arg1 withSecret:(id)arg2 withTrustedClaimsSet:(id)arg3 withError:(id *)arg4 withForcedAlgorithmByName:(id)arg5;
+ (id)encodePayload:(id)arg1 withSecret:(id)arg2 withHeaders:(id)arg3 algorithm:(id)arg4 withError:(id *)arg5;
+ (id)encodePayload:(id)arg1 withSecret:(id)arg2 withHeaders:(id)arg3 algorithm:(id)arg4;
+ (id)encodePayload:(id)arg1 withSecret:(id)arg2 algorithm:(id)arg3;
+ (id)encodePayload:(id)arg1 withSecret:(id)arg2;
+ (id)encodeClaimsSet:(id)arg1 withSecret:(id)arg2 algorithm:(id)arg3;
+ (id)encodeClaimsSet:(id)arg1 withSecret:(id)arg2;
+ (id)encodeSegment:(id)arg1;
+ (id)encodeSegment:(id)arg1 withError:(id *)arg2;
+ (id)decodeWithChain:(id)arg1;
+ (id)decodeWithHolders:(id)arg1;
+ (id)encodeWithChain:(id)arg1;
+ (id)encodeWithHolders:(id)arg1;
+ (id)decodeMessage:(id)arg1;
+ (id)encodeClaimsSet:(id)arg1;
+ (id)encodePayload:(id)arg1;

@end

