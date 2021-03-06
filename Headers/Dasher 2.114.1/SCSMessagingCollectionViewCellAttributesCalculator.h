//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, SCSMessagingCollectionViewFlowLayout;

@interface SCSMessagingCollectionViewCellAttributesCalculator : NSObject
{
    SCSMessagingCollectionViewFlowLayout *_layout;
    NSCache *_cache;
}

@property(readonly, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) __weak SCSMessagingCollectionViewFlowLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)cellAttributesForItemWithHash:(unsigned long long)arg1 atIndexPath:(id)arg2;
- (void)prepareForResettingForItemWithHash:(unsigned long long)arg1;
- (void)prepareForResetting;
- (id)initWithLayout:(id)arg1;

@end

