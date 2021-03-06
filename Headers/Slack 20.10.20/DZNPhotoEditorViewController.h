//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class DZNPhotoEditorContainerView, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UIScrollView;

@interface DZNPhotoEditorViewController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIImageView *_maskView;
    DZNPhotoEditorContainerView *_bottomView;
    UIActivityIndicatorView *_activityIndicator;
    long long _cropMode;
    UIButton *_leftButton;
    UIButton *_rightButton;
    CDUnknownBlockType _acceptBlock;
    CDUnknownBlockType _cancelBlock;
    UIImage *_editingImage;
    double _lastZoomScale;
    struct CGSize _cropSize;
}

- (void).cxx_destruct;
@property(nonatomic) double lastZoomScale; // @synthesize lastZoomScale=_lastZoomScale;
@property(copy, nonatomic) UIImage *editingImage; // @synthesize editingImage=_editingImage;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType acceptBlock; // @synthesize acceptBlock=_acceptBlock;
@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) long long cropMode; // @synthesize cropMode=_cropMode;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)cancelEdition:(id)arg1;
- (void)acceptEdition:(id)arg1;
- (void)updateScrollViewContentInset;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize=_cropSize;
- (id)trimmedImage:(id)arg1;
- (id)editedImage;
- (id)circularOverlayMask;
- (id)squareOverlayMask;
- (id)overlayMask;
- (double)barsHeight;
- (double)innerInset;
- (struct CGRect)guideRect;
- (id)buttonWithTitle:(id)arg1;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) DZNPhotoEditorContainerView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)commonInit;
- (id)initWithImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

