//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"

@class LiveRoomModel, NSString;
@protocol HTSLiveViewHierarchyProvider, IESLiveCamera, IESLiveMTRealStreamingProvider, IESLiveMTStreamEngineProvider, IESLiveMTToolbarProvider, IESLivePerfSampler, IESLiveToastFactory, IESLiveTracker;

@interface IESLiveMTCameraFragment : NSObject <HTSLiveComponent>
{
    _Bool _enableMirror;
    _Bool _enableTorch;
    _Bool _mirrored;
    LiveRoomModel *_roomModel;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveMTToolbarProvider> _toolbarProvider;
    id <IESLiveCamera> _camera;
    id <IESLiveTracker> _tracker;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveMTRealStreamingProvider> _streamProvider;
    id <IESLiveMTStreamEngineProvider> _engineProvider;
    id <IESLivePerfSampler> _perfSampler;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(nonatomic) _Bool enableTorch; // @synthesize enableTorch=_enableTorch;
@property(nonatomic) _Bool enableMirror; // @synthesize enableMirror=_enableMirror;
@property(retain, nonatomic) id <IESLivePerfSampler> perfSampler; // @synthesize perfSampler=_perfSampler;
@property(retain, nonatomic) id <IESLiveMTStreamEngineProvider> engineProvider; // @synthesize engineProvider=_engineProvider;
@property(retain, nonatomic) id <IESLiveMTRealStreamingProvider> streamProvider; // @synthesize streamProvider=_streamProvider;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveCamera> camera; // @synthesize camera=_camera;
@property(nonatomic) __weak id <IESLiveMTToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void)toggleReversed;
- (_Bool)toggleMirrored;
- (void)mirrorButtonClicked;
- (void)loadToolbarItem;
- (void)componentWillUnmount;
- (void)componentDidMount;
- (id)initWithRoom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

