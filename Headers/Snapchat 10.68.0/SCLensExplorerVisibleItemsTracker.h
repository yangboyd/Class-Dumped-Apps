//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SCLensExplorerVisibleItemsTracker : NSObject
{
    unsigned long long _tartgetSection;
    NSSet *_visibleItems;
    NSSet *_appearedItems;
    NSSet *_disappearedItems;
}

@property(retain, nonatomic) NSSet *disappearedItems; // @synthesize disappearedItems=_disappearedItems;
@property(retain, nonatomic) NSSet *appearedItems; // @synthesize appearedItems=_appearedItems;
@property(retain, nonatomic) NSSet *visibleItems; // @synthesize visibleItems=_visibleItems;
- (void).cxx_destruct;
- (_Bool)isItemVisibleAtIndex:(unsigned long long)arg1;
- (id)_filterOutIgnoredSection:(id)arg1;
- (void)visibleItemsChanged:(id)arg1;
- (id)initWithTargetSection:(unsigned long long)arg1;
- (id)init;

@end

