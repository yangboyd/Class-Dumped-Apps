//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol OGLGM2AccountSelectorItem;

@protocol OGLGM2AccountSelectorCell <NSObject>
+ (double)heightWithItem:(id <OGLGM2AccountSelectorItem>)arg1 constrainToCellWidth:(double)arg2;
- (void)updateWithItem:(id <OGLGM2AccountSelectorItem>)arg1;

@optional
+ (void)resetLayoutCache;
@end

