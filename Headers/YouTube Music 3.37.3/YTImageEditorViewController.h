//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTImageEditorViewDelegate-Protocol.h"

@class NSString, UIImage;
@protocol YTImageEditorControllerDelegate;

@interface YTImageEditorViewController : UIViewController <YTImageEditorViewDelegate>
{
    UIImage *_image;
    id <YTImageEditorControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTImageEditorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapCancelButton;
- (void)didTapChooseButton;
- (id)editorView;
- (id)createCroppedImageFromImage:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)setCropParamsFromEndpoint:(id)arg1;
- (void)setCropInfoText:(id)arg1;
- (void)setImage:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

