//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GMUAssetState : NSObject
{
    NSArray *_actionOperations;
    unsigned long long _itemState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long itemState; // @synthesize itemState=_itemState;
@property(readonly, nonatomic) NSArray *actionOperations; // @synthesize actionOperations=_actionOperations;
- (id)initWithItemState:(unsigned long long)arg1 actionOperations:(id)arg2;

@end

