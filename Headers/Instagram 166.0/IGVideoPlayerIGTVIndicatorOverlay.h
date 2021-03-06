//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGVideoPlayerOverlayToolbarItem.h>

#import <FBSharedFramework/IGMediaIndicatorDelegate-Protocol.h>
#import <FBSharedFramework/IGVideoPlayerOverlayIndicatorController-Protocol.h>

@class IGMediaIndicator, IGMediaIndicatorConfiguration, NSString;
@protocol IGVideoPlayerIGTVIndicatorOverlayDelegate;

@interface IGVideoPlayerIGTVIndicatorOverlay : IGVideoPlayerOverlayToolbarItem <IGMediaIndicatorDelegate, IGVideoPlayerOverlayIndicatorController>
{
    IGMediaIndicator *_igtvIndicator;
    IGMediaIndicatorConfiguration *_configuration;
    id <IGVideoPlayerIGTVIndicatorOverlayDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoPlayerIGTVIndicatorOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGMediaIndicatorConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)peekIndicatorsWithExpandedLeftIndicator:(_Bool)arg1 withCollapseDelay:(double)arg2;
- (void)mediaIndicator:(id)arg1 didChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicatorTapped:(id)arg1;
- (void)mediaIndicator:(id)arg1 willChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)reset;
- (struct UIEdgeInsets)toolbarItemInsets;
- (long long)preferredVerticalAlignment;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;
- (void)overlayWasAddedToContext:(id)arg1;
- (void)loadView;
- (void)collapseIndicatorAnimated:(_Bool)arg1;
- (void)expandIndicatorAnimated:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

