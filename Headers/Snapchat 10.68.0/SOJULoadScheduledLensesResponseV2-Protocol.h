//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJULoadScheduledLensesResponseV2 <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *activeRearLensesChecksums;
@property(readonly, copy, nonatomic) NSArray *precachedLensesChecksums;
@property(readonly, copy, nonatomic) NSArray *activeLensesChecksums;
@property(readonly, copy, nonatomic) NSNumber *medianIndexDepth;
@property(readonly, copy, nonatomic) NSArray *activeRearLenses;
@property(readonly, copy, nonatomic) NSString *preselectedLensId;
@property(readonly, copy, nonatomic) NSString *lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *cacheTtlMillis;
@property(readonly, copy, nonatomic) NSArray *precachedLenses;
@property(readonly, copy, nonatomic) NSArray *activeLenses;
@end

