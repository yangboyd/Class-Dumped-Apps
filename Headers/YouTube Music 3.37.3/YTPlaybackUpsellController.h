//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"
#import "YTSingleVideoMediaStateObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSString, YTIUpsellDialogRenderer;
@protocol YTResponder, YTSingleVideoObservable;

@interface YTPlaybackUpsellController : NSObject <YTSingleVideoMediaStateObserver, YTSystemNotificationsObserver, YTResponder>
{
    int _triggerType;
    _Bool _isUpsellAfterPlayback;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTSingleVideoObservable> _activeSingleVideo;
    YTIUpsellDialogRenderer *_renderer;
}

@property(retain, nonatomic) YTIUpsellDialogRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) id <YTSingleVideoObservable> activeSingleVideo; // @synthesize activeSingleVideo=_activeSingleVideo;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)clearState;
- (void)triggerMatched;
- (void)appDidBecomeActive:(id)arg1;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)resetWithPlayerResponse:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

