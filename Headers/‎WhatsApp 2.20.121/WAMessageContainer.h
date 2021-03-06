//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WAMessageContainerMetrics, WAMessageContainerModel, WAMessageContainerSlice, WAMessageStatusSlice;

@interface WAMessageContainer : NSObject
{
    WAMessageStatusSlice *_statusSlice;
    WAMessageContainerSlice *_audioSlice;
    struct CGSize _size;
    WAMessageContainerModel *_containerModel;
    _Bool _valid;
    unsigned long long _displayStyle;
    NSArray *_slices;
}

+ (id)defaultMetricsForViewControllerSize:(struct CGSize)arg1 messageType:(int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *slices; // @synthesize slices=_slices;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (_Bool)detectHyperlinks:(id)arg1;
- (void)invalidateAll;
- (void)invalidateMessageStatusSlice;
- (void)invalidateSlicesWithMedia;
- (struct CGSize)sizeForSlices:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (void)fontSizeDidChange:(id)arg1;
@property(readonly, nonatomic) WAMessageContainerMetrics *metrics;
- (id)initWithMessages:(id)arg1 trusted:(_Bool)arg2 metrics:(id)arg3 displayStyle:(unsigned long long)arg4;

@end

