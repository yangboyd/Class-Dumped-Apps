//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/GMUClusterAlgorithm-Protocol.h>

@class NSMutableArray, NSString;

@interface GMUSimpleClusterAlgorithm : NSObject <GMUClusterAlgorithm>
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
- (id)clustersAtZoom:(float)arg1;
- (void)clearItems;
- (void)removeItem:(id)arg1;
- (void)addItems:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

