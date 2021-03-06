//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "IESLiveAllGesturesRouter-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol HTSLiveDetailRouter, HTSLiveViewHierarchyProvider, IESLiveWebViewService;

@interface IESLiveAllGesturesFragment : NSObject <UIGestureRecognizerDelegate, HTSLiveComponent, IESLiveAllGesturesRouter>
{
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveWebViewService> _webViewService;
    id <HTSLiveDetailRouter> _router;
    NSMutableArray *_gestures;
    long long _orientation;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSMutableArray *gestures; // @synthesize gestures=_gestures;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveWebViewService> webViewService; // @synthesize webViewService=_webViewService;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (void).cxx_destruct;
- (void)componentOrientationChanged:(long long)arg1;
- (void)componentDidUnmount;
- (id)getGestureModelFrom:(id)arg1;
- (id)addLiveGesture:(unsigned long long)arg1 action:(CDUnknownBlockType)arg2 shouldBegin:(CDUnknownBlockType)arg3;
- (id)addLiveGesture:(unsigned long long)arg1 action:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)respondAction:(id)arg1;
- (id)init;
- (id)providedRouter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

