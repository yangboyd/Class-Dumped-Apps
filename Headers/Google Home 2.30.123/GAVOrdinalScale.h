//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVRangedScale-Protocol.h"

@class GAVNumericExtent, GAVOrdinalDomain, NSString;
@protocol GAVExtent, NSCopying;

@interface GAVOrdinalScale : NSObject <GAVRangedScale>
{
    _Bool _isRangeDescending;
    GAVNumericExtent *_range;
    GAVOrdinalDomain *_domain;
    id <NSCopying> _domainStart;
    id <NSCopying> _domainEnd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NSCopying> domainEnd; // @synthesize domainEnd=_domainEnd;
@property(retain, nonatomic) id <NSCopying> domainStart; // @synthesize domainStart=_domainStart;
@property(retain, nonatomic) GAVOrdinalDomain *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) _Bool isRangeDescending; // @synthesize isRangeDescending=_isRangeDescending;
@property(retain, nonatomic) GAVNumericExtent *range; // @synthesize range=_range;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <GAVExtent> valuesExtent;
@property(readonly, nonatomic) int rangeWidth;
@property(readonly, nonatomic) double rangeBandWidth;
- (void)addValue:(id)arg1;
- (double)applyForValue:(id)arg1;
- (id)initWithRangeDescending:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

