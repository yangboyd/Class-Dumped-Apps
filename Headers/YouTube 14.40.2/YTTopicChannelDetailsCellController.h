//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTTopicChannelDetailsCellDelegate.h"

@class GIMMe, NSString, YTITopicChannelDetailsRenderer, YTSubscribeSwitchController;

@interface YTTopicChannelDetailsCellController : YTInnerTubeCellController <YTTopicChannelDetailsCellDelegate>
{
    YTITopicChannelDetailsRenderer *_renderer;
    YTSubscribeSwitchController *_subscribeSwitchController;
}

- (void).cxx_destruct;
- (void)resetSubscribeSwitchController;
- (void)setCell:(id)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

