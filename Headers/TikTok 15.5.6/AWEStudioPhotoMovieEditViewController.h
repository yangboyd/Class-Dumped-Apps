//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEEditPageProtocol-Protocol.h"
#import "AWEMediaBigAnimationProtocol-Protocol.h"

@class ACCEditViewControllerInputData, NSString;
@protocol ACCComponentBusProtocol;

@interface AWEStudioPhotoMovieEditViewController : UIViewController <AWEMediaBigAnimationProtocol, AWEEditPageProtocol>
{
    ACCEditViewControllerInputData *inputData;
    id <ACCComponentBusProtocol> _componentBus;
}

@property(retain, nonatomic) id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (id)captionComponent;
- (id)transitionComponent;
- (id)editViewComponent;
- (id)playerComponent;
- (id)rootComponent;
@property(retain, nonatomic) ACCEditViewControllerInputData *inputData; // @synthesize inputData;
- (CDUnknownBlockType)cancelBlock;
- (id)captionManager;
- (id)aweplayer;
- (void)setCoverImage:(id)arg1;
- (id)sourceModel;
- (id)publishModel;
- (struct CGRect)mediaBigMediaFrame;
- (id)mediaBigButtonsContainer;
- (id)mediaBigButtonsContainerSnap;
- (id)mediaBigMediaSnap;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithInputData:(id)arg1;
- (void)ACC_didReceiveMemoryWarning;
- (void)ACC_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)ACC_viewDidDisappear:(_Bool)arg1;
- (void)ACC_viewWillDisappear:(_Bool)arg1;
- (void)ACC_viewDidAppear:(_Bool)arg1;
- (void)ACC_viewWillAppear:(_Bool)arg1;
- (void)ACC_viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

