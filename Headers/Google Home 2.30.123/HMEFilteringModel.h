//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEModel.h"

#import "HMEModelObserver-Protocol.h"

@class NSArray, NSString;

@interface HMEFilteringModel : HMEModel <HMEModelObserver>
{
    HMEModel *_model;
    NSArray *_cachedResults;
    CDUnknownBlockType _filteringBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType filteringBlock; // @synthesize filteringBlock=_filteringBlock;
@property(retain, nonatomic) NSArray *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(readonly, nonatomic) HMEModel *model; // @synthesize model=_model;
- (void)modelDidChange:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)status;
- (id)objectAtIndexPath:(id)arg1;
- (id)objects;
- (id)initWithModel:(id)arg1 filter:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

