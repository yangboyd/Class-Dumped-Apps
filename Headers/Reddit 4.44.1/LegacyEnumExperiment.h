//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LegacyExperiment.h"

@class LegacyEnumExperimentItem, NSArray;
@protocol LegacyEnumExperimentDelegate;

@interface LegacyEnumExperiment : LegacyExperiment
{
    NSArray *_items;
    id <LegacyEnumExperimentDelegate> _delegate;
}

@property(nonatomic) __weak id <LegacyEnumExperimentDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)itemWithTitle:(id)arg1;
@property(retain, nonatomic) LegacyEnumExperimentItem *currentItem;
- (id)initWithName:(id)arg1 getter:(SEL)arg2 setter:(SEL)arg3 delegate:(id)arg4 items:(id)arg5;

@end

