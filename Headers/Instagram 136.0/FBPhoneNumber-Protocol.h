//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol FBPhoneNumber <NSObject>
@property(readonly, nonatomic) int callingCode;
@property(readonly, copy, nonatomic) NSString *isoCountryCode;
- (NSString *)rawInput;
- (NSString *)formatForCallingFromCountry:(NSString *)arg1;
- (NSString *)formatWithStyle:(int)arg1;
- (NSURL *)asTelUrl;
- (_Bool)isPossible;
- (_Bool)isValid;
@end

