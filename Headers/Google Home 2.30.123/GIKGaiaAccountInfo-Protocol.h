//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIKAccountInfo-Protocol.h"

@class NSString, NSURL;

@protocol GIKGaiaAccountInfo <GIKAccountInfo>
@property(readonly, nonatomic) _Bool isUnicornAccount;
@property(readonly, nonatomic) NSString *obfuscatedCustomerID;
@property(readonly, nonatomic) NSString *hostedDomain;
@property(readonly, nonatomic) NSString *familyName;
@property(readonly, nonatomic) NSString *givenName;
@property(readonly, nonatomic) NSURL *displayImageURL;
@end

