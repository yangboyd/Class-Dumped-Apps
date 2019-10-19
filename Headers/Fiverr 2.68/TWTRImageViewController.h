//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TWTRMediaContainerPresentable-Protocol.h"

@class NSString, TWTRImageScrollView, TWTRTweetMediaEntity, UIImage, UIPopoverController;

@interface TWTRImageViewController : UIViewController <TWTRMediaContainerPresentable>
{
    TWTRImageScrollView *_scrollView;
    UIImage *_image;
    TWTRTweetMediaEntity *_mediaEntity;
    NSString *_parentTweetID;
    UIPopoverController *_popover;
}

@property(retain, nonatomic) UIPopoverController *popover; // @synthesize popover=_popover;
@property(readonly, copy, nonatomic) NSString *parentTweetID; // @synthesize parentTweetID=_parentTweetID;
@property(readonly, nonatomic) TWTRTweetMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TWTRImageScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)transitionDidComplete;
- (void)transitionWillBegin;
- (struct CGRect)transitionImageTargetFrame;
- (id)transitionImage;
- (void)didDismissInMediaContainer;
- (void)willShowInMediaContainer;
- (id)fullResolutionURL;
- (void)loadFullImageWithURL:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithImage:(id)arg1 mediaEntity:(id)arg2 parentTweetID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

