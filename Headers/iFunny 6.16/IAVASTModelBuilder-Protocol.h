//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IAVASTXMLValidator, NSString;

@protocol IAVASTModelBuilder <NSObject>
@property(retain, nonatomic) NSString *localResponseFolder;
@property(retain, nonatomic) IAVASTXMLValidator *XMLValidator;
@property(nonatomic) _Bool VPAIDSupported;
@property(nonatomic) long long bitratePivot;
@property(nonatomic) long long maxBitrateLimit;
@property(nonatomic) long long minBitrateLimit;
@property(nonatomic) _Bool isSecureURLRequired;
@end

