//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESLiveShortTouchItem;

@protocol IESLiveShortTouchContainer <NSObject>
- (struct CGRect)frameOfType:(unsigned long long)arg1;
- (_Bool)containsType:(unsigned long long)arg1;
- (void)activateType:(unsigned long long)arg1;
- (void)bringToFront:(unsigned long long)arg1;
- (void)removeType:(unsigned long long)arg1;
- (void)removeItem:(IESLiveShortTouchItem *)arg1;
- (void)insertItem:(IESLiveShortTouchItem *)arg1 completion:(void (^)(void))arg2;
- (void)insertItem:(IESLiveShortTouchItem *)arg1;
- (void)reloadItems;
@end

